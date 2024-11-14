#include "Image.hpp"

int main() {

    Image image = generateImage(600, 600);
    clearImage(image, BLUE);
    saveImage(image);

}