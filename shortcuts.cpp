#include <Arduino.h>
#include <HID-Project.h>
#include "shortcuts.h"

// bool selected_os = WINDOWS;



extern void run_shortcut(shortcut_t shortcut, bool os) {
    switch(shortcut) {
        case COPY:
            Keyboard.press(os ? KEY_LEFT_CTRL: KEY_LEFT_GUI);
            Keyboard.write('c');
            Keyboard.releaseAll();
        break;
        case PASTE:
            Keyboard.press(os ? KEY_LEFT_CTRL: KEY_LEFT_GUI);
            Keyboard.write('v');
            Keyboard.releaseAll();
        break;
        case UNDO:
            Keyboard.press(os ? KEY_LEFT_CTRL: KEY_LEFT_GUI);
            Keyboard.write('z');
            Keyboard.releaseAll();
        break;
    }
}