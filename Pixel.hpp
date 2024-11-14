#pragma once

#include <cstdint>

struct Pixel {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;
};

const Pixel RED        = Pixel{244, 67, 54, 255};
const Pixel PINK       = Pixel{232, 30, 99, 255};
const Pixel PURPLE     = Pixel{156, 39, 176, 255};
const Pixel DEEPPURPLE = Pixel{103, 58, 183, 255};
const Pixel INDIGO     = Pixel{63, 81, 181, 255};
const Pixel BLUE       = Pixel{33, 150, 243, 255};
const Pixel LIGHTBLUE  = Pixel{3, 169, 244, 255};
const Pixel CYAN       = Pixel{0, 188, 212, 255};
const Pixel TEAL       = Pixel{0, 150, 136, 255};
const Pixel GREEN      = Pixel{76, 175, 80, 255};
const Pixel LIGHTGREEN = Pixel{139, 195, 74, 255};
const Pixel LIME       = Pixel{205, 220, 57, 255};
const Pixel YELLOW     = Pixel{255, 235, 59, 255};
const Pixel AMBER      = Pixel{255, 193, 7, 255};
const Pixel ORANGE     = Pixel{255, 152, 0, 255};
const Pixel DEEPORANGE = Pixel{255, 87, 34, 255};
const Pixel BROWN      = Pixel{121, 85, 72, 255};
const Pixel GRAY       = Pixel{158, 158, 158, 255};
const Pixel BLUEGRAY   = Pixel{96, 125, 139, 255};
const Pixel BLACK      = Pixel{0, 0, 0, 255};
const Pixel WHITE      = Pixel{255, 255, 255, 255};