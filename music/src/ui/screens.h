#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *page1;
    lv_obj_t *key_board;
    lv_obj_t *list;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj10;
    lv_obj_t *obj11;
    lv_obj_t *obj12;
    lv_obj_t *obj13;
    lv_obj_t *obj14;
    lv_obj_t *obj15;
    lv_obj_t *obj16;
    lv_obj_t *obj17;
    lv_obj_t *obj18;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
    lv_obj_t *password_show;
    lv_obj_t *remember_me;
    lv_obj_t *user;
    lv_obj_t *user_1;
    lv_obj_t *user_label;
    lv_obj_t *user_show;
    lv_obj_t *volume;
    lv_obj_t *volume_1;
    lv_obj_t *volume_arc;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_PAGE1 = 2,
};

void create_screen_main();
void tick_screen_main();

void create_screen_page1();
void tick_screen_page1();

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/