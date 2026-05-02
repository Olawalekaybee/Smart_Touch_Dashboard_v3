#include <Arduino.h>
#include <lvgl.h>
#include <esp32_smartdisplay.h>

#include "gui/GUI.h"

static uint32_t lv_last_tick = 0;

void FAN1_event(lv_event_t *e)
{
    lv_obj_t *sw = (lv_obj_t *)lv_event_get_target(e);

    if (lv_obj_has_state(sw, LV_STATE_CHECKED))
    {
        Serial.println("FAN 1 ON");
    }
    else
    {
        Serial.println("FAN 1 OFF");
    }
}

void FAN2_event(lv_event_t *e)
{
    lv_obj_t *sw = (lv_obj_t *)lv_event_get_target(e);

    if (lv_obj_has_state(sw, LV_STATE_CHECKED))
    {
        Serial.println("FAN 2 ON");
    }
    else
    {
        Serial.println("FAN 2 OFF");
    }
}

void FAN3_event(lv_event_t *e)
{
    lv_obj_t *sw = (lv_obj_t *)lv_event_get_target(e);

    if (lv_obj_has_state(sw, LV_STATE_CHECKED))
    {
        Serial.println("FAN 3 ON");
    }
    else
    {
        Serial.println("FAN 3 OFF");
    }
}

void RollerScroll_event(lv_event_t *e)
{
    lv_obj_t *roller = (lv_obj_t *)lv_event_get_target(e);

    char selectedText[64];

    lv_roller_get_selected_str(
        roller,
        selectedText,
        sizeof(selectedText));

    Serial.print("Roller selected: ");
    Serial.println(selectedText);
}

void setup()
{
    Serial.begin(115200);
    delay(300);

    Serial.println("Starting SquareLine Vision UI...");

    smartdisplay_init();
    smartdisplay_lcd_set_backlight(1.0f);

    lv_last_tick = millis();

    GUI_init();

    lv_obj_add_event_cb(
        GUI_Switch__new_device_1__Toggle___Switch_2,
        FAN1_event,
        LV_EVENT_VALUE_CHANGED,
        NULL);

    lv_obj_add_event_cb(
        GUI_Switch__new_device_1__Toggle___Switch_1,
        FAN2_event,
        LV_EVENT_VALUE_CHANGED,
        NULL);

    lv_obj_add_event_cb(
        GUI_Switch__new_device_1__Toggle___Switch,
        FAN3_event,
        LV_EVENT_VALUE_CHANGED,
        NULL);

    lv_obj_add_event_cb(
        GUI_Roller__new_device_1__Frame_427318176,
        RollerScroll_event,
        LV_EVENT_VALUE_CHANGED,
        NULL);

    Serial.println("SquareLine Vision UI loaded!");
}

void loop()
{
    uint32_t now = millis();
    lv_tick_inc(now - lv_last_tick);
    lv_last_tick = now;

    lv_timer_handler();
    delay(5);
}