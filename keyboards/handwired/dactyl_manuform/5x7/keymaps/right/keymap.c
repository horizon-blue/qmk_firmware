#include QMK_KEYBOARD_H
#include "shared_keymap.h"

bool set_scrolling = false;

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (set_scrolling) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case DRAG_SCROLL:
        if (record->event.pressed) {
            set_scrolling = true;
            pointing_device_set_cpi(100);
        } else {
            set_scrolling = false;
            pointing_device_set_cpi(4000);
        }
        return false; // Skip all further processing of this key
    default:
        return true; // Process all other keycodes normally
  }
}