#if defined(EEZ_FOR_LVGL)
#include <eez/core/vars.h>
#endif

#include "ui.h"
#include "screens.h"
#include "images.h"
#include "actions.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[5904] = {
    0x7E, 0x45, 0x45, 0x5A, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x03, 0xE0, 0x01, 0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
    0xE0, 0x14, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x30, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0xA8, 0x00, 0x00, 0x00,
    0xB4, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0xCC, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xD4, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00,
    0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0xB4, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42,
    0x24, 0x01, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x5C, 0x01, 0x00, 0x00, 0x78, 0x01, 0x00, 0x00,
    0x94, 0x01, 0x00, 0x00, 0xB0, 0x01, 0x00, 0x00, 0xCC, 0x01, 0x00, 0x00, 0xE8, 0x01, 0x00, 0x00,
    0x04, 0x02, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x3C, 0x02, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00,
    0x74, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0xB4, 0x02, 0x00, 0x00, 0xD8, 0x02, 0x00, 0x00,
    0xFC, 0x02, 0x00, 0x00, 0x20, 0x03, 0x00, 0x00, 0x44, 0x03, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00,
    0x84, 0x03, 0x00, 0x00, 0xA8, 0x03, 0x00, 0x00, 0xC4, 0x03, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00,
    0xFC, 0x03, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0x34, 0x04, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00,
    0x6C, 0x04, 0x00, 0x00, 0x88, 0x04, 0x00, 0x00, 0xA4, 0x04, 0x00, 0x00, 0xC0, 0x04, 0x00, 0x00,
    0xDC, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0x14, 0x05, 0x00, 0x00, 0x30, 0x05, 0x00, 0x00,
    0x4C, 0x05, 0x00, 0x00, 0x68, 0x05, 0x00, 0x00, 0x84, 0x05, 0x00, 0x00, 0xA0, 0x05, 0x00, 0x00,
    0xBC, 0x05, 0x00, 0x00, 0xD8, 0x05, 0x00, 0x00, 0xF4, 0x05, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00,
    0x2C, 0x06, 0x00, 0x00, 0x48, 0x06, 0x00, 0x00, 0x64, 0x06, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00,
    0x9C, 0x06, 0x00, 0x00, 0xB8, 0x06, 0x00, 0x00, 0xD4, 0x06, 0x00, 0x00, 0xF0, 0x06, 0x00, 0x00,
    0x0C, 0x07, 0x00, 0x00, 0x28, 0x07, 0x00, 0x00, 0x44, 0x07, 0x00, 0x00, 0x60, 0x07, 0x00, 0x00,
    0x7C, 0x07, 0x00, 0x00, 0x98, 0x07, 0x00, 0x00, 0xB4, 0x07, 0x00, 0x00, 0xD0, 0x07, 0x00, 0x00,
    0xEC, 0x07, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x24, 0x08, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00,
    0x64, 0x08, 0x00, 0x00, 0x88, 0x08, 0x00, 0x00, 0xAC, 0x08, 0x00, 0x00, 0xD0, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x61, 0x64, 0x65, 0x64, 0x20, 0x4C, 0x4F,
    0x56, 0x45, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xD0, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD4, 0x08, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xC0, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0xAC, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x98, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA0, 0x08, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x23, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x8C, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x94, 0x08, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x25, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x6C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x58, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x48, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x26, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x38, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0x08, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x34, 0x08, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x0C, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF4, 0x07, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xEC, 0x07, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xE4, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xD8, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xD0, 0x07, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC8, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xBC, 0x07, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB4, 0x07, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xAC, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xA0, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x98, 0x07, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x90, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x84, 0x07, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x07, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x74, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x68, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x60, 0x07, 0x00, 0x00, 0xF2, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x07, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x54, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x50, 0x07, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0xEF, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4C, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x07, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x07, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x28, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x21, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x14, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xEC, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x20, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xD8, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x22, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xC4, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xB0, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xA0, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x28, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x70, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5C, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x4C, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3C, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2C, 0x06, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x30, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1C, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xF8, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xE4, 0x05, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xE8, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xD8, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xC4, 0x05, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xC8, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xB4, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xA0, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x29, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x74, 0x05, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x78, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x50, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x40, 0x05, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x34, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x2A, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x2B, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xEC, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xD8, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xC4, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xB4, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x24, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xA0, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x8C, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x78, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x64, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x27, 0x4E, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xEF, 0x03, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x38, 0x04, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x30, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x28, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x04, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xF8, 0x03, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE4, 0x03, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xDC, 0x03, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xD4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xC0, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00,
    0xC0, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00,
    0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00,
    0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00, 0xC8, 0x03, 0x00, 0x00,
    0xD0, 0x03, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00, 0xD0, 0x03, 0x00, 0x00,
    0xD0, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00,
    0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00,
    0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00,
    0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00,
    0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xD8, 0x03, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00,
    0xE0, 0x03, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xEC, 0x03, 0x00, 0x00,
    0xF8, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xFC, 0x03, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x14, 0x04, 0x00, 0x00,
    0x1C, 0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2C, 0x04, 0x00, 0x00, 0x34, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00, 0x4C, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x5C, 0x04, 0x00, 0x00, 0x64, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x74, 0x04, 0x00, 0x00,
    0x7C, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x88, 0x04, 0x00, 0x00, 0x88, 0x04, 0x00, 0x00,
    0x90, 0x04, 0x00, 0x00, 0x98, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x9C, 0x04, 0x00, 0x00,
    0xA4, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00,
    0xA8, 0x04, 0x00, 0x00, 0xA8, 0x04, 0x00, 0x00, 0xB0, 0x04, 0x00, 0x00, 0xB0, 0x04, 0x00, 0x00,
    0xB0, 0x04, 0x00, 0x00, 0xB0, 0x04, 0x00, 0x00, 0xB0, 0x04, 0x00, 0x00, 0xB0, 0x04, 0x00, 0x00,
    0xB0, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00,
    0xB8, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00, 0xB8, 0x04, 0x00, 0x00,
    0xC0, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00,
    0xC8, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00, 0xC8, 0x04, 0x00, 0x00,
    0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00,
    0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00,
    0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00,
    0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD0, 0x04, 0x00, 0x00, 0xD4, 0x04, 0x00, 0x00,
    0xDC, 0x04, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x00,
    0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00,
    0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00,
    0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xE4, 0x04, 0x00, 0x00, 0xEC, 0x04, 0x00, 0x00,
    0xF4, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00,
    0xF4, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00,
    0xF8, 0x04, 0x00, 0x00, 0xF8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x04, 0x00, 0x00,
    0xFC, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x04, 0x00, 0x00, 0x04, 0x05, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x14, 0x05, 0x00, 0x00, 0x1C, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x2C, 0x05, 0x00, 0x00, 0x34, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x44, 0x05, 0x00, 0x00,
    0x4C, 0x05, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x50, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0x60, 0x00, 0xE0, 0x02, 0x00, 0x00, 0x00, 0x20, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x60, 0x00, 0xE0,
    0x02, 0x00, 0x00, 0x00, 0x0C, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x02, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x02, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xC4, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x0A, 0xC0, 0x01, 0x60,
    0x04, 0x00, 0x0A, 0xC0, 0x10, 0xC0, 0x00, 0xE0, 0x00, 0x60, 0x03, 0x00, 0x0B, 0xC0, 0x01, 0x60,
    0x04, 0x00, 0x0B, 0xC0, 0x08, 0xC0, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x94, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00,
    0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x60, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xA4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x88, 0x03, 0x00, 0x00, 0x8C, 0x03, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x08, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x09, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x0A, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x0B, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x04, 0x60, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x0C, 0x00, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x0D, 0x00, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xB8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x6C, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x0E, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x06, 0x60, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x10, 0x00, 0x00, 0xE0,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xB4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAC, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x03, 0x60, 0x00, 0xF0,
    0x0B, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x03, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x11, 0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
    0xF4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xDC, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0xBC, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x9C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
    0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
    0x74, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0xE0,
    0x07, 0x00, 0x00, 0xE0, 0x05, 0x00, 0x00, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x02, 0x60, 0x00, 0xF0,
    0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
    0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x04, 0x60, 0x00, 0xF0,
    0x0D, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0xE0, 0x05, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0,
    0x05, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x10, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x01, 0x00,
    0x0F, 0x00, 0x02, 0x00, 0x0E, 0x00, 0x03, 0x00, 0x11, 0x00, 0x04, 0x00, 0x14, 0x00, 0x05, 0x00,
    0x13, 0x00, 0x06, 0x00, 0x12, 0x00, 0x07, 0x00, 0x12, 0x00, 0x07, 0x00, 0x2A, 0x00, 0x00, 0x00,
    0x2B, 0x00, 0x01, 0x00, 0x2C, 0x00, 0x02, 0x00, 0x2D, 0x00, 0x03, 0x00, 0x2E, 0x00, 0x04, 0x00,
    0x5C, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x8C, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x00, 0x00, 0xB0, 0x00, 0x00, 0x00,
    0xBC, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x00, 0x00, 0xD4, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00,
    0xEC, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00,
    0x1C, 0x01, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xAC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEF, 0x80, 0x8C, 0x00,
    0x6D, 0x69, 0x6B, 0x75, 0x73, 0x73, 0x6F, 0x6E, 0x67, 0x40, 0x31, 0x36, 0x33, 0x2E, 0x63, 0x6F,
    0x6D, 0x00, 0x00, 0x00, 0x32, 0x38, 0x35, 0x35, 0x36, 0x30, 0x36, 0x35, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xEF, 0x81, 0x8B, 0x00, 0xEF, 0x81, 0x91, 0x00, 0xEF, 0x81, 0x88, 0x00,
    0xEF, 0x81, 0xB4, 0x00, 0xEF, 0x80, 0xA8, 0x00, 0xEF, 0x89, 0x80, 0x00, 0xEF, 0x80, 0x93, 0x00,
    0xEF, 0x87, 0xAB, 0x00, 0xEF, 0x80, 0x8B, 0x00, 0xEF, 0x80, 0x81, 0x00, 0x53, 0x48, 0x45, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};


ActionExecFunc actions[] = {
    0
};


#if defined(EEZ_FOR_LVGL)

void ui_init() {
    eez_flow_init(assets, sizeof(assets), (lv_obj_t **)&objects, sizeof(objects), images, sizeof(images), actions);
}

void ui_tick() {
    eez_flow_tick();
    tick_screen(g_currentScreen);
}

#else

static int16_t currentScreen = -1;

static lv_obj_t *getLvglObjectFromIndex(int32_t index) {
    if (index == -1) {
        return 0;
    }
    return ((lv_obj_t **)&objects)[index];
}

static const void *getLvglImageByName(const char *name) {
    for (size_t imageIndex = 0; imageIndex < sizeof(images) / sizeof(ext_img_desc_t); imageIndex++) {
        if (strcmp(images[imageIndex].name, name) == 0) {
            return images[imageIndex].img_dsc;
        }
    }
    return 0;
}

void loadScreen(enum ScreensEnum screenId) {
    currentScreen = screenId - 1;
    lv_obj_t *screen = getLvglObjectFromIndex(currentScreen);
    lv_scr_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_IN, 200, 0, false);
}

void ui_init() {
    create_screens();
    loadScreen(SCREEN_ID_MAIN);
}

void ui_tick() {
    tick_screen(currentScreen);
}

#endif
