# P3 Image
This C++ library provides basic functionality for working with PPM (P3) images, supporting operations like image generation, clearing, and saving. This implementation focuses on simplicity and ease of use for handling PPM images in plain text (P3) format.

## Features

- **Generate Images:** Create an empty image with specified width, height, channels, and default color.
- **Clear Images:** Fill an existing image with a single color.
- **Save Images:** Write an image to a file in PPM (P3) format.

## Installation
Simply include **Image.hpp** in your project. The library does not depend on any external libraries.

## Example
``` cpp
#include "Image.hpp"

int main() {

    Image image = generateImage(600, 600);
    clearImage(image, BLUE);
    saveImage(image);

}
```



