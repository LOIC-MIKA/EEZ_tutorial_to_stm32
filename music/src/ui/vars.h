#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_USER = 0,
    FLOW_GLOBAL_VARIABLE_PASSWORD = 1,
    FLOW_GLOBAL_VARIABLE_REMEMBER_ME = 2,
    FLOW_GLOBAL_VARIABLE_MUSIC_BAR = 3,
    FLOW_GLOBAL_VARIABLE_MUSIC_TOPIC = 4,
    FLOW_GLOBAL_VARIABLE_SLIDER = 5,
    FLOW_GLOBAL_VARIABLE_VOLUME = 6
};

// Native global variables



#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/