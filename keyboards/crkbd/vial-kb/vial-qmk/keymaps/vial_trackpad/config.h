#pragma once

#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Cirque Trackpad Pin Definitions
#define CIRQUE_PINNACLE_ROEA   GP7
#define CIRQUE_PINNACLE_RE1A   GP6
#define CIRQUE_PINNACLE_KEYEX1 GP4
#define CIRQUE_PINNACLE_KEYEX2 GP8

// Optional: Resolution and Scaling (defaults provided; adjust for 23mm/40mm trackpad)
#define CIRQUE_PINNACLE_RESOLUTION_X 2048  // Example for TM040040; check datasheet
#define CIRQUE_PINNACLE_RESOLUTION_Y 1792
#define POINTING_DEVICE_SCALING 1024       // CPI scaling; tune for sensitivity

// Gesture Support (1-2 finger detection)
#define CIRQUE_PINNACLE_TAP_ENABLE yes     // Enables tap-to-click
#define CIRQUE_PINNACLE_CIRCULAR_SCROLL yes // For circular scrolling if supported