#include "../GUI.h"

#ifdef GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#include GUI_EXTERNAL_CUSTOM_CALLBACK_FUNCTION_FILE
#endif

void GUI_event__Screen__new_device_1__Clicked(lv_event_t *event) {
}

void GUI_event__Container__new_device_1__Frame_427318171__Clicked(
    lv_event_t *event) {
}

void GUI_event__Roller__new_device_1__Frame_427318176__Scroll(
    lv_event_t *event) {
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318176, 0,
                         LV_ANIM_ON); // Roller_Properties
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318176, 0,
                         LV_ANIM_ON); // Roller_Properties
}

void GUI_event__Roller__new_device_1__Frame_427318182__Clicked(
    lv_event_t *event) {
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318182, 0,
                         LV_ANIM_ON); // Roller_Properties
}

void GUI_event__Roller__new_device_1__Frame_427318183__Clicked(
    lv_event_t *event) {
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318183, 0,
                         LV_ANIM_ON); // Roller_Properties
}

void GUI_event__Switch__new_device_1__Toggle___Switch_2__Clicked(
    lv_event_t *event) {
  if (lv_obj_has_state(GUI_Switch__new_device_1__Toggle___Switch_2,
                       LV_STATE_DEFAULT)) {
    lv_obj_clear_state(GUI_Switch__new_device_1__Toggle___Switch_2,
                       LV_STATE_DEFAULT);
  } else {
    lv_obj_add_state(GUI_Switch__new_device_1__Toggle___Switch_2,
                     LV_STATE_DEFAULT);
  } // Modify_State
}
