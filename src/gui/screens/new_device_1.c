#include "../GUI.h"

void GUI_initScreen__new_device_1() {
  GUI_Screen__new_device_1 = lv_obj_create(NULL);
  lv_obj_remove_flag(GUI_Screen__new_device_1, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_add_event_cb(GUI_Screen__new_device_1,
                      GUI_event__Screen__new_device_1__Clicked,
                      LV_EVENT_CLICKED, NULL);
  GUI_Container__new_device_1__Frame_427318171 =
      lv_obj_create(GUI_Screen__new_device_1);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318171);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318171,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318171,
                   LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Container__new_device_1__Frame_427318171, 38, -223);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318171, 675, 43);
  lv_obj_add_event_cb(
      GUI_Container__new_device_1__Frame_427318171,
      GUI_event__Container__new_device_1__Frame_427318171__Clicked,
      LV_EVENT_CLICKED, NULL);

  GUI_Container__new_device_1__Frame_427318170 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318171);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318170);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318170,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318170,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318170, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__new_device_1__Choose_a_file_to =
      lv_label_create(GUI_Container__new_device_1__Frame_427318170);
  lv_obj_remove_flag(GUI_Label__new_device_1__Choose_a_file_to,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__new_device_1__Choose_a_file_to,
                         LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__new_device_1__Choose_a_file_to, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__new_device_1__Choose_a_file_to, 234, 20);

  GUI_Container__new_device_1__Frame_427318169 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318170);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318169);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318169,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318169,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318169, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Image__new_device_1__Image_2 =
      lv_image_create(GUI_Container__new_device_1__Frame_427318169);
  lv_obj_remove_flag(GUI_Image__new_device_1__Image_2, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__Image_2, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__new_device_1__Image_2, 25, 12);

  GUI_Image__new_device_1__Image_1 =
      lv_image_create(GUI_Container__new_device_1__Frame_427318169);
  lv_obj_remove_flag(GUI_Image__new_device_1__Image_1, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__Image_1, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__new_device_1__Image_1, 22, 20);

  GUI_Image__new_device_1__Image =
      lv_image_create(GUI_Container__new_device_1__Frame_427318169);
  lv_obj_remove_flag(GUI_Image__new_device_1__Image, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__Image, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__new_device_1__Image, 23, 16);

  GUI_Roller__new_device_1__Frame_427318176 =
      lv_roller_create(GUI_Screen__new_device_1);
  lv_obj_remove_flag(GUI_Roller__new_device_1__Frame_427318176,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_roller_set_options(
      GUI_Roller__new_device_1__Frame_427318176,
      "Dashboard\nSLS Logo\nEmbedded board\nThermostat\nMedal\nSquare\nHero "
      "Figure\nGold Pen",
      LV_ROLLER_MODE_NORMAL);
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318176, 1,
                         LV_ANIM_OFF);
  lv_obj_set_align(GUI_Roller__new_device_1__Frame_427318176, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Roller__new_device_1__Frame_427318176, -171, 37);
  lv_obj_set_size(GUI_Roller__new_device_1__Frame_427318176, 255, 381);
  lv_obj_add_event_cb(GUI_Roller__new_device_1__Frame_427318176,
                      GUI_event__Roller__new_device_1__Frame_427318176__Scroll,
                      LV_EVENT_SCROLL, NULL);

  GUI_Container__new_device_1__Frame_427318184 =
      lv_obj_create(GUI_Screen__new_device_1);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318184);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318184,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318184,
                   LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Container__new_device_1__Frame_427318184, 145, -93);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318184, 333, 126);

  GUI_Roller__new_device_1__Frame_427318182 =
      lv_roller_create(GUI_Container__new_device_1__Frame_427318184);
  lv_obj_remove_flag(GUI_Roller__new_device_1__Frame_427318182,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_roller_set_options(GUI_Roller__new_device_1__Frame_427318182,
                        "PETC\nABS\nPLA", LV_ROLLER_MODE_NORMAL);
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318182, 1,
                         LV_ANIM_OFF);
  lv_obj_set_align(GUI_Roller__new_device_1__Frame_427318182, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Roller__new_device_1__Frame_427318182, 150,
                  LV_SIZE_CONTENT);
  lv_obj_add_event_cb(GUI_Roller__new_device_1__Frame_427318182,
                      GUI_event__Roller__new_device_1__Frame_427318182__Clicked,
                      LV_EVENT_CLICKED, NULL);

  GUI_Roller__new_device_1__Frame_427318183 =
      lv_roller_create(GUI_Container__new_device_1__Frame_427318184);
  lv_obj_remove_flag(GUI_Roller__new_device_1__Frame_427318183,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_roller_set_options(GUI_Roller__new_device_1__Frame_427318183,
                        "50 mm /h\n70 mm/h\n90 mm/h", LV_ROLLER_MODE_NORMAL);
  lv_roller_set_selected(GUI_Roller__new_device_1__Frame_427318183, 1,
                         LV_ANIM_OFF);
  lv_obj_set_align(GUI_Roller__new_device_1__Frame_427318183, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Roller__new_device_1__Frame_427318183, 150,
                  LV_SIZE_CONTENT);
  lv_obj_add_event_cb(GUI_Roller__new_device_1__Frame_427318183,
                      GUI_event__Roller__new_device_1__Frame_427318183__Clicked,
                      LV_EVENT_CLICKED, NULL);

  GUI_Container__new_device_1__Frame_427318187 =
      lv_obj_create(GUI_Screen__new_device_1);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318187);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318187,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318187,
                   LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Container__new_device_1__Frame_427318187, 154, 46);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318187, 352, 72);

  GUI_Container__new_device_1__Frame_427318185 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318187);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318185);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318185,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318185,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318185, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__new_device_1__Dashboard_3 =
      lv_label_create(GUI_Container__new_device_1__Frame_427318185);
  lv_obj_remove_flag(GUI_Label__new_device_1__Dashboard_3,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__new_device_1__Dashboard_3,
                         LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__new_device_1__Dashboard_3, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__new_device_1__Dashboard_3, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__new_device_1__Dashboard_2 =
      lv_label_create(GUI_Container__new_device_1__Frame_427318185);
  lv_obj_remove_flag(GUI_Label__new_device_1__Dashboard_2,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__new_device_1__Dashboard_2,
                         LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__new_device_1__Dashboard_2, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__new_device_1__Dashboard_2, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Label__new_device_1__Dashboard_1 =
      lv_label_create(GUI_Container__new_device_1__Frame_427318185);
  lv_obj_remove_flag(GUI_Label__new_device_1__Dashboard_1,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__new_device_1__Dashboard_1,
                         LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__new_device_1__Dashboard_1, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__new_device_1__Dashboard_1, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Container__new_device_1__Frame_427318186 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318187);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318186);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318186,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318186,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318186, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Switch__new_device_1__Toggle___Switch_2 =
      lv_switch_create(GUI_Container__new_device_1__Frame_427318186);
  lv_obj_remove_flag(GUI_Switch__new_device_1__Toggle___Switch_2,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Switch__new_device_1__Toggle___Switch_2,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Switch__new_device_1__Toggle___Switch_2, 92, 40);
  lv_obj_add_event_cb(
      GUI_Switch__new_device_1__Toggle___Switch_2,
      GUI_event__Switch__new_device_1__Toggle___Switch_2__Clicked,
      LV_EVENT_CLICKED, NULL);

  GUI_Switch__new_device_1__Toggle___Switch_1 =
      lv_switch_create(GUI_Container__new_device_1__Frame_427318186);
  lv_obj_remove_flag(GUI_Switch__new_device_1__Toggle___Switch_1,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Switch__new_device_1__Toggle___Switch_1,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Switch__new_device_1__Toggle___Switch_1, 92, 40);

  GUI_Switch__new_device_1__Toggle___Switch =
      lv_switch_create(GUI_Container__new_device_1__Frame_427318186);
  lv_obj_remove_flag(GUI_Switch__new_device_1__Toggle___Switch,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Switch__new_device_1__Toggle___Switch, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Switch__new_device_1__Toggle___Switch, 92, 40);

  GUI_Button__new_device_1__Frame_427318188 =
      lv_button_create(GUI_Screen__new_device_1);
  lv_obj_set_align(GUI_Button__new_device_1__Frame_427318188, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Button__new_device_1__Frame_427318188, 150, 183);
  lv_obj_set_size(GUI_Button__new_device_1__Frame_427318188, 318,
                  LV_SIZE_CONTENT);

  GUI_Container__new_device_1__solar_play_bold =
      lv_obj_create(GUI_Button__new_device_1__Frame_427318188);
  lv_obj_remove_style_all(GUI_Container__new_device_1__solar_play_bold);
  lv_obj_remove_flag(GUI_Container__new_device_1__solar_play_bold,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__solar_play_bold,
                   LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Container__new_device_1__solar_play_bold, 24, 24);

  GUI_Image__new_device_1__Vector_1 =
      lv_image_create(GUI_Container__new_device_1__solar_play_bold);
  lv_obj_remove_flag(GUI_Image__new_device_1__Vector_1, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__Vector_1, LV_ALIGN_CENTER);
  lv_obj_set_x(GUI_Image__new_device_1__Vector_1, 1);
  lv_obj_set_size(GUI_Image__new_device_1__Vector_1, 19, 20);

  GUI_Label__new_device_1__Dashboard =
      lv_label_create(GUI_Button__new_device_1__Frame_427318188);
  lv_obj_remove_flag(GUI_Label__new_device_1__Dashboard,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_label_set_long_mode(GUI_Label__new_device_1__Dashboard,
                         LV_LABEL_LONG_WRAP);
  lv_obj_set_align(GUI_Label__new_device_1__Dashboard, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Label__new_device_1__Dashboard, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Container__new_device_1__Frame_427318181 =
      lv_obj_create(GUI_Screen__new_device_1);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_427318181);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_427318181,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_427318181,
                   LV_ALIGN_CENTER);
  lv_obj_set_x(GUI_Container__new_device_1__Frame_427318181, -361);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_427318181, 77, 488);

  GUI_Panel__new_device_1__tabs_2 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318181);
  lv_obj_remove_flag(GUI_Panel__new_device_1__tabs_2, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Panel__new_device_1__tabs_2, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Panel__new_device_1__tabs_2, 77, 104);

  GUI_Container__new_device_1__Frame_2 =
      lv_obj_create(GUI_Panel__new_device_1__tabs_2);
  lv_obj_remove_style_all(GUI_Container__new_device_1__Frame_2);
  lv_obj_remove_flag(GUI_Container__new_device_1__Frame_2,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Container__new_device_1__Frame_2, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Container__new_device_1__Frame_2, 1, -1);
  lv_obj_set_size(GUI_Container__new_device_1__Frame_2, 40, 57);

  GUI_Image__new_device_1__Vector =
      lv_image_create(GUI_Container__new_device_1__Frame_2);
  lv_obj_remove_flag(GUI_Image__new_device_1__Vector, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__Vector, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Image__new_device_1__Vector, 30, 33);

  GUI_Panel__new_device_1__Rectangle_2 =
      lv_obj_create(GUI_Panel__new_device_1__tabs_2);
  lv_obj_remove_flag(GUI_Panel__new_device_1__Rectangle_2,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Panel__new_device_1__Rectangle_2, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Panel__new_device_1__Rectangle_2, 77, 104);

  GUI_Panel__new_device_1__tabs_1 =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318181);
  lv_obj_remove_flag(GUI_Panel__new_device_1__tabs_1, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Panel__new_device_1__tabs_1, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Panel__new_device_1__tabs_1, 77, 104);

  GUI_Panel__new_device_1__tabs =
      lv_obj_create(GUI_Container__new_device_1__Frame_427318181);
  lv_obj_remove_flag(GUI_Panel__new_device_1__tabs, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Panel__new_device_1__tabs, LV_ALIGN_CENTER);
  lv_obj_set_size(GUI_Panel__new_device_1__tabs, 77, 104);

  GUI_Panel__new_device_1__Rectangle_55 =
      lv_obj_create(GUI_Panel__new_device_1__tabs);
  lv_obj_remove_flag(GUI_Panel__new_device_1__Rectangle_55,
                     LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Panel__new_device_1__Rectangle_55, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Panel__new_device_1__Rectangle_55, -248, 58);
  lv_obj_set_size(GUI_Panel__new_device_1__Rectangle_55, 77, 104);

  GUI_Image__new_device_1__image_3 = lv_image_create(GUI_Screen__new_device_1);
  lv_obj_add_flag(GUI_Image__new_device_1__image_3, LV_OBJ_FLAG_ADV_HITTEST);
  lv_obj_remove_flag(GUI_Image__new_device_1__image_3, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__image_3, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Image__new_device_1__image_3, -356, -186);
  lv_obj_set_size(GUI_Image__new_device_1__image_3, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_Image__new_device_1__image_4 = lv_image_create(GUI_Screen__new_device_1);
  lv_obj_add_flag(GUI_Image__new_device_1__image_4, LV_OBJ_FLAG_ADV_HITTEST);
  lv_obj_remove_flag(GUI_Image__new_device_1__image_4, LV_OBJ_FLAG_SCROLLABLE);
  lv_obj_set_align(GUI_Image__new_device_1__image_4, LV_ALIGN_CENTER);
  lv_obj_set_pos(GUI_Image__new_device_1__image_4, -362, 7);
  lv_obj_set_size(GUI_Image__new_device_1__image_4, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT);

  GUI_initScreenStyles__new_device_1();
  GUI_initScreenTexts__new_device_1();
}

void GUI_initScreenTexts__new_device_1() {
  lv_label_set_text(GUI_Label__new_device_1__Choose_a_file_to,
                    "Choose a file to start printing");
  lv_label_set_text(GUI_Label__new_device_1__Dashboard_3, "FAN 1");
  lv_label_set_text(GUI_Label__new_device_1__Dashboard_2, "FAN 2");
  lv_label_set_text(GUI_Label__new_device_1__Dashboard_1, "FAN 3");
  lv_label_set_text(GUI_Label__new_device_1__Dashboard, "START\nPRINTING");
}

void GUI_initScreenStyles__new_device_1() {
  lv_obj_add_style(GUI_Screen__new_device_1, &GUI_Style__class_we1nBmmtYVN8wu__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318171,
                   &GUI_Style__class_rpwBQUYdObB71R__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318170,
                   &GUI_Style__class_4r3zkJeAD2V5FV__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__new_device_1__Choose_a_file_to,
                   &GUI_Style__class_6nwtUllpYNTH2t__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318169,
                   &GUI_Style__class_WfOUflcFjxkEPn__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(GUI_Image__new_device_1__Image_2,
                   &upload_image_25x12_e051409367764047bbc8e18cb4a579e6_png);

  lv_obj_add_style(GUI_Image__new_device_1__Image_2,
                   &GUI_Style__class_oDPXe1EYoMg90B__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(GUI_Image__new_device_1__Image_1,
                   &upload_image_22x20_b651cde7f68349039acf67ed2d8c78f8_png);

  lv_obj_add_style(GUI_Image__new_device_1__Image_1,
                   &GUI_Style__class_ldk2m3Wdlb5uQN__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(GUI_Image__new_device_1__Image,
                   &upload_image_23x16_8517ab1cf2f7404ea07af203450e815a_png);

  lv_obj_add_style(GUI_Image__new_device_1__Image,
                   &GUI_Style__class_45XRfV4LUS0SFS__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318176,
                   &GUI_Style__class_IMCRbCjoBMdmQt__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318176,
                   &GUI_Style__class_i6rwLzwSGRTUZp__,
                   LV_PART_SELECTED | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318184,
                   &GUI_Style__class_7wLiNneiOruSfb__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318182,
                   &GUI_Style__class_PfudEwsb7EfVte__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318182,
                   &GUI_Style__class_MYvsbDrxw1tkHJ__,
                   LV_PART_SELECTED | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318183,
                   &GUI_Style__class_EijlFFU0rCXCRj__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Roller__new_device_1__Frame_427318183,
                   &GUI_Style__class_UedBfm2l2r0pMD__,
                   LV_PART_SELECTED | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318187,
                   &GUI_Style__class_UcrjY5OUVsbO8C__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318185,
                   &GUI_Style__class_Wu039vHE1nZ7us__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__new_device_1__Dashboard_3,
                   &GUI_Style__class_sEk2APvKKadYiS__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__new_device_1__Dashboard_2,
                   &GUI_Style__class_BcRLBCF1YKFa7c__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Label__new_device_1__Dashboard_1,
                   &GUI_Style__class_MmQpcGC8gmvggJ__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318186,
                   &GUI_Style__class_OVu0KB6OxEoqbU__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch_2,
                   &GUI_Style__class_XFv7i18dXeuL3X__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch_2,
                   &GUI_Style__class_0NpWKLLbkILwhO__,
                   LV_PART_KNOB | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch_1,
                   &GUI_Style__class_vhTDBUljXVQzav__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch_1,
                   &GUI_Style__class_ByS7H89fy3XTHd__,
                   LV_PART_KNOB | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch,
                   &GUI_Style__class_zAWtnWoaXRDnqy__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_add_style(GUI_Switch__new_device_1__Toggle___Switch,
                   &GUI_Style__class_SJOzi5jY7WKvsf__,
                   LV_PART_KNOB | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Button__new_device_1__Frame_427318188,
                   &GUI_Style__class_E2fwCrgSxv1TMQ__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__solar_play_bold,
                   &GUI_Style__class_1MczpGC0nfmYQf__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(
      GUI_Image__new_device_1__Vector_1,
      &upload_vector_2002_57_1900x2000_1805e00f10d24625b9ed78f0766fc960_png);

  lv_obj_add_style(GUI_Label__new_device_1__Dashboard,
                   &GUI_Style__class_GhfWdNvD4yeC9W__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_427318181,
                   &GUI_Style__class_pPvtrFmvUwYeOa__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Panel__new_device_1__tabs_2,
                   &GUI_Style__class_ZbgRQ2OXkMnawA__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Container__new_device_1__Frame_2,
                   &GUI_Style__class_ZFFRHfzMDkC9FM__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(
      GUI_Image__new_device_1__Vector,
      &upload_vector_2002_62_30x33_709f487cd8454bb19a2a161d1cc5b039_png);

  lv_obj_add_style(GUI_Panel__new_device_1__Rectangle_2,
                   &GUI_Style__class_IO82d3XB7h4kyW__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Panel__new_device_1__tabs_1,
                   &GUI_Style__class_NLv554sCvxU5cC__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Panel__new_device_1__tabs,
                   &GUI_Style__class_69q4x3bsRpemIi__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_add_style(GUI_Panel__new_device_1__Rectangle_55,
                   &GUI_Style__class_woDgThDqv8aUNx__,
                   LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(
      GUI_Image__new_device_1__image_3,
      &upload_vector_2002_62_30x33_709f487cd8454bb19a2a161d1cc5b039_png);

  lv_image_set_src(
      GUI_Image__new_device_1__image_4,
      &upload_boxicons_movefilled_311692c184a64c08bfb8787434f8c460_png);
}
