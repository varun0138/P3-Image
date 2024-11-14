#pragma once

#include "Pixel.hpp"

#include <vector>
#include <string>
#include <fstream>

struct Image {
    const char type[3] = "P3";
    uint32_t width;
    uint32_t height;
    uint16_t channels;
    std::vector<std::vector<Pixel>> pixels;
};

Image generateImage(uint32_t width, uint32_t height, uint16_t channels=255, const Pixel& color=BLACK); // generates Image struct
void clearImage(Image& img, const Pixel& color=BLACK); // clears the whole image with the given color
void saveImage(const Image& img, const std::string& path="out.ppm"); // writes Image struct to a .ppm(P3) file

Image generateImage(uint32_t width, uint32_t height, uint16_t channels, const Pixel& color) {
    Image img;
    img.width = width;
    img.height = height;
    img.channels = channels;

    for(uint32_t y = 0; y < img.height; y++) {
        std::vector<Pixel> row;
        for(uint32_t x = 0; x < img.width; x++) {
            row.push_back(color);
        }
        img.pixels.push_back(row);
    }

    return img;
}

void clearImage(Image& img, const Pixel& color) {
    for(uint32_t y = 0; y < img.height; y++) {
        for(uint32_t x = 0; x < img.width; x++) {
            img.pixels[y][x] = color;
        }
    }
}

void saveImage(const Image& img, const std::string& path) {
    std::ofstream output(path);
    if(!output) {
        // ERROR CHECKING
    }

    output << img.type << std::endl;
    output << img.width << " " << img.height << std::endl;
    output << img.channels << std::endl;

    for(uint32_t y = 0; y < img.height; y++) {
        for(uint32_t x = 0; x < img.width; x++) {
            output << (unsigned int)img.pixels[y][x].red << " " << (unsigned int)img.pixels[y][x].green << " " << (unsigned int)img.pixels[y][x].blue << " ";
        }
        output << std::endl;
    }

    output.close();
}