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
    FLOW_GLOBAL_VARIABLE_PASSWORD = 1
};

// Native global variables

extern const char *get_var_user();
extern void set_var_user(const char *value);
extern const char *get_var_password();
extern void set_var_password(const char *value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/