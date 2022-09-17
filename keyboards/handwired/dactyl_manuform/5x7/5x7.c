#include "5x7.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
    { 7,  6,  5,  4,  3,  2,  1 },
    { 8,  9,  10, 11, 12, 13, 14 },
    { 21, 20, 19, 18, 17, 16, 15 },
    { 22, 25, 26, 29, 30, 31, NO_LED },
    { 23, 24, 27, 28, 33, 32, 37 },
    { NO_LED, NO_LED, NO_LED, NO_LED, 34, 35, 36 },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
    { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position
  { 0, 0 },         // light on PCB
  { 0, 118.15 },    // 6
  { 0, 98.46 },     // 5
  { 0, 78.76 },     // 4
  { 0, 59.07 },     // 3
  { 0, 39.38 },     // 2
  { 0, 19.69 },     // 1
  { 0, 0 },         // Esc
  { 12.8, 0 },      // Tab
  { 12.8, 19.69 },  // Q
  { 12.8, 39.38 },  // W
  { 12.8, 59.07 },  // E
  { 12.8, 78.76 },  // R
  { 12.8, 98.46 },  // T
  { 12.8, 118.15 }, // [
  { 25.6, 118.15 }, // `
  { 25.6, 98.46 },  // G
  { 25.6, 78.76 },  // F
  { 25.6, 59.07 },  // D
  { 25.6, 39.38 },  // S
  { 25.6, 19.69 },  // A
  { 25.6, 0 },      // Ctrl
  { 38.4, 0 },      // Shift
  { 51.2, 0 },      // Fn
  { 51.2, 19.69 },  // Opt
  { 38.4, 19.69 },  // Z
  { 38.4, 39.38 },  // X
  { 51.2, 39.38 },  // PgUP
  { 51.2, 39.38 },  // PgDn
  { 38.4, 59.07 },  // C
  { 38.4, 78.76 },  // V
  { 38.4, 98.46 },  // B
  { 51.2, 98.46 },  // Space
  { 51.2, 78.76 },  // Cmd
  { 64, 78.76 },    // Fn
  { 64, 98.46 },    // Home
  { 64, 118.15 },   // End
  { 51.2, 118.15 },   // Del

}, {
  // LED Index to Flag
  0,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4,
  4, 4, 4, 4,
              4, 4, 4,
              4, 4, 4,
} };
