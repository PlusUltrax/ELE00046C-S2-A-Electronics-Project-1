#include <cstdint>

namespace card_suit_characters {
    uint8_t heart[8] = {
        0b00000,
        0b01010,
        0b11111,
        0b11111,
        0b11111,
        0b01110,
        0b00100,
        0b00000
    };

    uint8_t diamond[8] = {
        0b00000,
        0b00100,
        0b01110,
        0b11111,
        0b11111,
        0b01110,
        0b00100,
        0b00000
    };

    uint8_t spade[8] = {
        0b00000,
        0b00100,
        0b01110,
        0b11111,
        0b11111,
        0b00100,
        0b01110,
        0b00000
    };
    
    uint8_t club[8] = {
        0b00000,
        0b01110,
        0b01110,
        0b11111,
        0b11111,
        0b00100,
        0b01110,
        0b00000
    }; 
}