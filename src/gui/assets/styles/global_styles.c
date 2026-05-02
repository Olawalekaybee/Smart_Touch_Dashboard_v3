#include "../../GUI.h"

void GUI_initGlobalStyles() {
  lv_style_init(&GUI_Style__class_we1nBmmtYVN8wu__);
  lv_style_set_bg_color(&GUI_Style__class_we1nBmmtYVN8wu__,
                        lv_color_make(102, 102, 102));
  lv_style_set_bg_opa(&GUI_Style__class_we1nBmmtYVN8wu__, 255);
  lv_style_set_bg_grad_color(&GUI_Style__class_we1nBmmtYVN8wu__,
                             lv_color_make(0, 0, 0));
  lv_style_set_bg_grad_dir(&GUI_Style__class_we1nBmmtYVN8wu__, LV_GRAD_DIR_VER);
  lv_style_set_bg_grad_opa(&GUI_Style__class_we1nBmmtYVN8wu__, 255);
  lv_style_set_bg_main_stop(&GUI_Style__class_we1nBmmtYVN8wu__, 0);
  lv_style_set_bg_grad_stop(&GUI_Style__class_we1nBmmtYVN8wu__, 191);
  lv_style_set_radius(&GUI_Style__class_we1nBmmtYVN8wu__, 0);

  lv_style_init(&GUI_Style__class_rpwBQUYdObB71R__);
  lv_style_set_bg_color(&GUI_Style__class_rpwBQUYdObB71R__,
                        lv_color_make(25, 29, 38));
  lv_style_set_bg_opa(&GUI_Style__class_rpwBQUYdObB71R__, 255);
  lv_style_set_border_color(&GUI_Style__class_rpwBQUYdObB71R__,
                            lv_color_make(64, 76, 99));
  lv_style_set_border_opa(&GUI_Style__class_rpwBQUYdObB71R__, 255);
  lv_style_set_border_width(&GUI_Style__class_rpwBQUYdObB71R__, 2);
  lv_style_set_border_side(&GUI_Style__class_rpwBQUYdObB71R__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_shadow_color(&GUI_Style__class_rpwBQUYdObB71R__,
                            lv_color_make(255, 255, 255));
  lv_style_set_shadow_opa(&GUI_Style__class_rpwBQUYdObB71R__, 64);
  lv_style_set_shadow_offset_x(&GUI_Style__class_rpwBQUYdObB71R__, 0);
  lv_style_set_shadow_offset_y(&GUI_Style__class_rpwBQUYdObB71R__, -2);
  lv_style_set_shadow_width(&GUI_Style__class_rpwBQUYdObB71R__, 4);
  lv_style_set_shadow_spread(&GUI_Style__class_rpwBQUYdObB71R__, 0);
  lv_style_set_pad_left(&GUI_Style__class_rpwBQUYdObB71R__, 35);
  lv_style_set_pad_right(&GUI_Style__class_rpwBQUYdObB71R__, 35);
  lv_style_set_pad_top(&GUI_Style__class_rpwBQUYdObB71R__, 12);
  lv_style_set_pad_bottom(&GUI_Style__class_rpwBQUYdObB71R__, 12);
  lv_style_set_flex_flow(&GUI_Style__class_rpwBQUYdObB71R__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_rpwBQUYdObB71R__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_rpwBQUYdObB71R__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_rpwBQUYdObB71R__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_rpwBQUYdObB71R__, 10);
  lv_style_set_pad_column(&GUI_Style__class_rpwBQUYdObB71R__, 0);
  lv_style_set_layout(&GUI_Style__class_rpwBQUYdObB71R__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_4r3zkJeAD2V5FV__);
  lv_style_set_bg_color(&GUI_Style__class_4r3zkJeAD2V5FV__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_4r3zkJeAD2V5FV__, 0);
  lv_style_set_radius(&GUI_Style__class_4r3zkJeAD2V5FV__, 0);
  lv_style_set_pad_all(&GUI_Style__class_4r3zkJeAD2V5FV__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_4r3zkJeAD2V5FV__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_4r3zkJeAD2V5FV__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_4r3zkJeAD2V5FV__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_4r3zkJeAD2V5FV__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_4r3zkJeAD2V5FV__, 0);
  lv_style_set_pad_column(&GUI_Style__class_4r3zkJeAD2V5FV__, 279);
  lv_style_set_layout(&GUI_Style__class_4r3zkJeAD2V5FV__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_6nwtUllpYNTH2t__);
  lv_style_set_text_font(&GUI_Style__class_6nwtUllpYNTH2t__, &inter_16_700);
  lv_style_set_text_letter_space(&GUI_Style__class_6nwtUllpYNTH2t__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_6nwtUllpYNTH2t__, 0);
  lv_style_set_text_align(&GUI_Style__class_6nwtUllpYNTH2t__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_6nwtUllpYNTH2t__,
                          lv_color_make(101, 108, 123));
  lv_style_set_text_opa(&GUI_Style__class_6nwtUllpYNTH2t__, 255);

  lv_style_init(&GUI_Style__class_WfOUflcFjxkEPn__);
  lv_style_set_bg_color(&GUI_Style__class_WfOUflcFjxkEPn__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_WfOUflcFjxkEPn__, 0);
  lv_style_set_radius(&GUI_Style__class_WfOUflcFjxkEPn__, 0);
  lv_style_set_pad_all(&GUI_Style__class_WfOUflcFjxkEPn__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_WfOUflcFjxkEPn__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_WfOUflcFjxkEPn__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_WfOUflcFjxkEPn__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_WfOUflcFjxkEPn__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_WfOUflcFjxkEPn__, 0);
  lv_style_set_pad_column(&GUI_Style__class_WfOUflcFjxkEPn__, 16);
  lv_style_set_layout(&GUI_Style__class_WfOUflcFjxkEPn__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_oDPXe1EYoMg90B__);
  lv_style_set_bg_color(&GUI_Style__class_oDPXe1EYoMg90B__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_oDPXe1EYoMg90B__, 0);
  lv_style_set_radius(&GUI_Style__class_oDPXe1EYoMg90B__, 0);

  lv_style_init(&GUI_Style__class_ldk2m3Wdlb5uQN__);
  lv_style_set_bg_color(&GUI_Style__class_ldk2m3Wdlb5uQN__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_ldk2m3Wdlb5uQN__, 0);
  lv_style_set_radius(&GUI_Style__class_ldk2m3Wdlb5uQN__, 0);

  lv_style_init(&GUI_Style__class_45XRfV4LUS0SFS__);
  lv_style_set_bg_color(&GUI_Style__class_45XRfV4LUS0SFS__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_45XRfV4LUS0SFS__, 0);
  lv_style_set_radius(&GUI_Style__class_45XRfV4LUS0SFS__, 0);

  lv_style_init(&GUI_Style__class_IMCRbCjoBMdmQt__);
  lv_style_set_bg_color(&GUI_Style__class_IMCRbCjoBMdmQt__,
                        lv_color_make(26, 29, 37));
  lv_style_set_bg_opa(&GUI_Style__class_IMCRbCjoBMdmQt__, 255);
  lv_style_set_radius(&GUI_Style__class_IMCRbCjoBMdmQt__, 22);
  lv_style_set_border_color(&GUI_Style__class_IMCRbCjoBMdmQt__,
                            lv_color_make(62, 72, 95));
  lv_style_set_border_opa(&GUI_Style__class_IMCRbCjoBMdmQt__, 255);
  lv_style_set_border_width(&GUI_Style__class_IMCRbCjoBMdmQt__, 2);
  lv_style_set_border_side(&GUI_Style__class_IMCRbCjoBMdmQt__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_pad_left(&GUI_Style__class_IMCRbCjoBMdmQt__, 20);
  lv_style_set_pad_right(&GUI_Style__class_IMCRbCjoBMdmQt__, 20);
  lv_style_set_pad_top(&GUI_Style__class_IMCRbCjoBMdmQt__, 10);
  lv_style_set_pad_bottom(&GUI_Style__class_IMCRbCjoBMdmQt__, 10);
  lv_style_set_text_font(&GUI_Style__class_IMCRbCjoBMdmQt__, &inter_16_700);
  lv_style_set_text_line_space(&GUI_Style__class_IMCRbCjoBMdmQt__, 23);
  lv_style_set_text_align(&GUI_Style__class_IMCRbCjoBMdmQt__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_IMCRbCjoBMdmQt__,
                          lv_color_make(98, 103, 116));
  lv_style_set_text_opa(&GUI_Style__class_IMCRbCjoBMdmQt__, 255);

  lv_style_init(&GUI_Style__class_i6rwLzwSGRTUZp__);
  lv_style_set_bg_color(&GUI_Style__class_i6rwLzwSGRTUZp__,
                        lv_color_make(39, 44, 57));
  lv_style_set_bg_opa(&GUI_Style__class_i6rwLzwSGRTUZp__, 255);
  lv_style_set_radius(&GUI_Style__class_i6rwLzwSGRTUZp__, 0);
  lv_style_set_text_font(&GUI_Style__class_i6rwLzwSGRTUZp__, &inter_16_700);
  lv_style_set_text_line_space(&GUI_Style__class_i6rwLzwSGRTUZp__, 23);
  lv_style_set_text_align(&GUI_Style__class_i6rwLzwSGRTUZp__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_i6rwLzwSGRTUZp__,
                          lv_color_make(4, 197, 241));
  lv_style_set_text_opa(&GUI_Style__class_i6rwLzwSGRTUZp__, 255);
  lv_style_set_flex_flow(&GUI_Style__class_i6rwLzwSGRTUZp__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_i6rwLzwSGRTUZp__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_i6rwLzwSGRTUZp__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_i6rwLzwSGRTUZp__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_i6rwLzwSGRTUZp__, 0);
  lv_style_set_pad_column(&GUI_Style__class_i6rwLzwSGRTUZp__, 10);
  lv_style_set_layout(&GUI_Style__class_i6rwLzwSGRTUZp__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_7wLiNneiOruSfb__);
  lv_style_set_bg_color(&GUI_Style__class_7wLiNneiOruSfb__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_7wLiNneiOruSfb__, 0);
  lv_style_set_radius(&GUI_Style__class_7wLiNneiOruSfb__, 0);
  lv_style_set_pad_all(&GUI_Style__class_7wLiNneiOruSfb__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_7wLiNneiOruSfb__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_7wLiNneiOruSfb__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_7wLiNneiOruSfb__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_7wLiNneiOruSfb__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_7wLiNneiOruSfb__, 0);
  lv_style_set_pad_column(&GUI_Style__class_7wLiNneiOruSfb__, 33);
  lv_style_set_layout(&GUI_Style__class_7wLiNneiOruSfb__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_PfudEwsb7EfVte__);
  lv_style_set_bg_color(&GUI_Style__class_PfudEwsb7EfVte__,
                        lv_color_make(26, 29, 37));
  lv_style_set_bg_opa(&GUI_Style__class_PfudEwsb7EfVte__, 255);
  lv_style_set_radius(&GUI_Style__class_PfudEwsb7EfVte__, 22);
  lv_style_set_border_color(&GUI_Style__class_PfudEwsb7EfVte__,
                            lv_color_make(81, 95, 123));
  lv_style_set_border_opa(&GUI_Style__class_PfudEwsb7EfVte__, 255);
  lv_style_set_border_width(&GUI_Style__class_PfudEwsb7EfVte__, 2);
  lv_style_set_border_side(&GUI_Style__class_PfudEwsb7EfVte__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_shadow_color(&GUI_Style__class_PfudEwsb7EfVte__,
                            lv_color_make(10, 10, 10));
  lv_style_set_shadow_opa(&GUI_Style__class_PfudEwsb7EfVte__, 64);
  lv_style_set_shadow_offset_x(&GUI_Style__class_PfudEwsb7EfVte__, 0);
  lv_style_set_shadow_offset_y(&GUI_Style__class_PfudEwsb7EfVte__, 8);
  lv_style_set_shadow_width(&GUI_Style__class_PfudEwsb7EfVte__, 11);
  lv_style_set_shadow_spread(&GUI_Style__class_PfudEwsb7EfVte__, 0);
  lv_style_set_pad_left(&GUI_Style__class_PfudEwsb7EfVte__, 20);
  lv_style_set_pad_right(&GUI_Style__class_PfudEwsb7EfVte__, 20);
  lv_style_set_pad_top(&GUI_Style__class_PfudEwsb7EfVte__, 10);
  lv_style_set_pad_bottom(&GUI_Style__class_PfudEwsb7EfVte__, 10);
  lv_style_set_text_font(&GUI_Style__class_PfudEwsb7EfVte__, &inter_18_700);
  lv_style_set_text_line_space(&GUI_Style__class_PfudEwsb7EfVte__, 24);
  lv_style_set_text_align(&GUI_Style__class_PfudEwsb7EfVte__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_PfudEwsb7EfVte__,
                          lv_color_make(98, 103, 116));
  lv_style_set_text_opa(&GUI_Style__class_PfudEwsb7EfVte__, 255);

  lv_style_init(&GUI_Style__class_MYvsbDrxw1tkHJ__);
  lv_style_set_bg_color(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                        lv_color_make(58, 68, 92));
  lv_style_set_bg_opa(&GUI_Style__class_MYvsbDrxw1tkHJ__, 255);
  lv_style_set_radius(&GUI_Style__class_MYvsbDrxw1tkHJ__, 0);
  lv_style_set_text_font(&GUI_Style__class_MYvsbDrxw1tkHJ__, &inter_18_700);
  lv_style_set_text_line_space(&GUI_Style__class_MYvsbDrxw1tkHJ__, 24);
  lv_style_set_text_align(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_MYvsbDrxw1tkHJ__, 255);
  lv_style_set_flex_flow(&GUI_Style__class_MYvsbDrxw1tkHJ__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_MYvsbDrxw1tkHJ__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_MYvsbDrxw1tkHJ__, 0);
  lv_style_set_pad_column(&GUI_Style__class_MYvsbDrxw1tkHJ__, 10);
  lv_style_set_layout(&GUI_Style__class_MYvsbDrxw1tkHJ__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_EijlFFU0rCXCRj__);
  lv_style_set_bg_color(&GUI_Style__class_EijlFFU0rCXCRj__,
                        lv_color_make(26, 29, 37));
  lv_style_set_bg_opa(&GUI_Style__class_EijlFFU0rCXCRj__, 255);
  lv_style_set_radius(&GUI_Style__class_EijlFFU0rCXCRj__, 22);
  lv_style_set_border_color(&GUI_Style__class_EijlFFU0rCXCRj__,
                            lv_color_make(81, 95, 123));
  lv_style_set_border_opa(&GUI_Style__class_EijlFFU0rCXCRj__, 255);
  lv_style_set_border_width(&GUI_Style__class_EijlFFU0rCXCRj__, 2);
  lv_style_set_border_side(&GUI_Style__class_EijlFFU0rCXCRj__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_shadow_color(&GUI_Style__class_EijlFFU0rCXCRj__,
                            lv_color_make(0, 0, 0));
  lv_style_set_shadow_opa(&GUI_Style__class_EijlFFU0rCXCRj__, 64);
  lv_style_set_shadow_offset_x(&GUI_Style__class_EijlFFU0rCXCRj__, 0);
  lv_style_set_shadow_offset_y(&GUI_Style__class_EijlFFU0rCXCRj__, 8);
  lv_style_set_shadow_width(&GUI_Style__class_EijlFFU0rCXCRj__, 11);
  lv_style_set_shadow_spread(&GUI_Style__class_EijlFFU0rCXCRj__, 0);
  lv_style_set_pad_left(&GUI_Style__class_EijlFFU0rCXCRj__, 20);
  lv_style_set_pad_right(&GUI_Style__class_EijlFFU0rCXCRj__, 20);
  lv_style_set_pad_top(&GUI_Style__class_EijlFFU0rCXCRj__, 10);
  lv_style_set_pad_bottom(&GUI_Style__class_EijlFFU0rCXCRj__, 10);
  lv_style_set_text_font(&GUI_Style__class_EijlFFU0rCXCRj__, &inter_18_700);
  lv_style_set_text_line_space(&GUI_Style__class_EijlFFU0rCXCRj__, 24);
  lv_style_set_text_align(&GUI_Style__class_EijlFFU0rCXCRj__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_EijlFFU0rCXCRj__,
                          lv_color_make(98, 103, 116));
  lv_style_set_text_opa(&GUI_Style__class_EijlFFU0rCXCRj__, 255);

  lv_style_init(&GUI_Style__class_UedBfm2l2r0pMD__);
  lv_style_set_bg_color(&GUI_Style__class_UedBfm2l2r0pMD__,
                        lv_color_make(58, 68, 92));
  lv_style_set_bg_opa(&GUI_Style__class_UedBfm2l2r0pMD__, 255);
  lv_style_set_radius(&GUI_Style__class_UedBfm2l2r0pMD__, 0);
  lv_style_set_text_font(&GUI_Style__class_UedBfm2l2r0pMD__, &inter_18_700);
  lv_style_set_text_line_space(&GUI_Style__class_UedBfm2l2r0pMD__, 24);
  lv_style_set_text_align(&GUI_Style__class_UedBfm2l2r0pMD__,
                          LV_TEXT_ALIGN_CENTER);
  lv_style_set_text_color(&GUI_Style__class_UedBfm2l2r0pMD__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_UedBfm2l2r0pMD__, 255);
  lv_style_set_flex_flow(&GUI_Style__class_UedBfm2l2r0pMD__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_UedBfm2l2r0pMD__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_UedBfm2l2r0pMD__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_UedBfm2l2r0pMD__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_UedBfm2l2r0pMD__, 0);
  lv_style_set_pad_column(&GUI_Style__class_UedBfm2l2r0pMD__, 10);
  lv_style_set_layout(&GUI_Style__class_UedBfm2l2r0pMD__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_UcrjY5OUVsbO8C__);
  lv_style_set_bg_color(&GUI_Style__class_UcrjY5OUVsbO8C__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_UcrjY5OUVsbO8C__, 0);
  lv_style_set_radius(&GUI_Style__class_UcrjY5OUVsbO8C__, 0);
  lv_style_set_pad_all(&GUI_Style__class_UcrjY5OUVsbO8C__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_UcrjY5OUVsbO8C__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_UcrjY5OUVsbO8C__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_UcrjY5OUVsbO8C__,
                                LV_FLEX_ALIGN_START);
  lv_style_set_flex_cross_place(&GUI_Style__class_UcrjY5OUVsbO8C__,
                                LV_FLEX_ALIGN_START);
  lv_style_set_pad_row(&GUI_Style__class_UcrjY5OUVsbO8C__, 13);
  lv_style_set_pad_column(&GUI_Style__class_UcrjY5OUVsbO8C__, 0);
  lv_style_set_layout(&GUI_Style__class_UcrjY5OUVsbO8C__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_Wu039vHE1nZ7us__);
  lv_style_set_bg_color(&GUI_Style__class_Wu039vHE1nZ7us__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_Wu039vHE1nZ7us__, 0);
  lv_style_set_radius(&GUI_Style__class_Wu039vHE1nZ7us__, 0);
  lv_style_set_pad_left(&GUI_Style__class_Wu039vHE1nZ7us__, 12);
  lv_style_set_pad_right(&GUI_Style__class_Wu039vHE1nZ7us__, 12);
  lv_style_set_pad_top(&GUI_Style__class_Wu039vHE1nZ7us__, 0);
  lv_style_set_pad_bottom(&GUI_Style__class_Wu039vHE1nZ7us__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_Wu039vHE1nZ7us__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_Wu039vHE1nZ7us__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_Wu039vHE1nZ7us__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_Wu039vHE1nZ7us__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_Wu039vHE1nZ7us__, 0);
  lv_style_set_pad_column(&GUI_Style__class_Wu039vHE1nZ7us__, 82);
  lv_style_set_layout(&GUI_Style__class_Wu039vHE1nZ7us__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_sEk2APvKKadYiS__);
  lv_style_set_text_font(&GUI_Style__class_sEk2APvKKadYiS__, &inter_16_700);
  lv_style_set_text_letter_space(&GUI_Style__class_sEk2APvKKadYiS__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_sEk2APvKKadYiS__, 0);
  lv_style_set_text_align(&GUI_Style__class_sEk2APvKKadYiS__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_sEk2APvKKadYiS__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_sEk2APvKKadYiS__, 255);

  lv_style_init(&GUI_Style__class_BcRLBCF1YKFa7c__);
  lv_style_set_text_font(&GUI_Style__class_BcRLBCF1YKFa7c__, &inter_16_700);
  lv_style_set_text_letter_space(&GUI_Style__class_BcRLBCF1YKFa7c__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_BcRLBCF1YKFa7c__, 0);
  lv_style_set_text_align(&GUI_Style__class_BcRLBCF1YKFa7c__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_BcRLBCF1YKFa7c__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_BcRLBCF1YKFa7c__, 255);

  lv_style_init(&GUI_Style__class_MmQpcGC8gmvggJ__);
  lv_style_set_text_font(&GUI_Style__class_MmQpcGC8gmvggJ__, &inter_16_700);
  lv_style_set_text_letter_space(&GUI_Style__class_MmQpcGC8gmvggJ__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_MmQpcGC8gmvggJ__, 0);
  lv_style_set_text_align(&GUI_Style__class_MmQpcGC8gmvggJ__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_MmQpcGC8gmvggJ__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_MmQpcGC8gmvggJ__, 255);

  lv_style_init(&GUI_Style__class_OVu0KB6OxEoqbU__);
  lv_style_set_bg_color(&GUI_Style__class_OVu0KB6OxEoqbU__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_OVu0KB6OxEoqbU__, 0);
  lv_style_set_radius(&GUI_Style__class_OVu0KB6OxEoqbU__, 0);
  lv_style_set_pad_all(&GUI_Style__class_OVu0KB6OxEoqbU__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_OVu0KB6OxEoqbU__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_OVu0KB6OxEoqbU__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_OVu0KB6OxEoqbU__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_OVu0KB6OxEoqbU__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_OVu0KB6OxEoqbU__, 0);
  lv_style_set_pad_column(&GUI_Style__class_OVu0KB6OxEoqbU__, 38);
  lv_style_set_layout(&GUI_Style__class_OVu0KB6OxEoqbU__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_XFv7i18dXeuL3X__);
  lv_style_set_bg_color(&GUI_Style__class_XFv7i18dXeuL3X__,
                        lv_color_make(0, 177, 255));
  lv_style_set_bg_opa(&GUI_Style__class_XFv7i18dXeuL3X__, 255);
  lv_style_set_radius(&GUI_Style__class_XFv7i18dXeuL3X__, 100);
  lv_style_set_border_color(&GUI_Style__class_XFv7i18dXeuL3X__,
                            lv_color_make(25, 28, 36));
  lv_style_set_border_opa(&GUI_Style__class_XFv7i18dXeuL3X__, 255);
  lv_style_set_border_width(&GUI_Style__class_XFv7i18dXeuL3X__, 4);
  lv_style_set_border_side(&GUI_Style__class_XFv7i18dXeuL3X__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_min_width(&GUI_Style__class_XFv7i18dXeuL3X__, 0);
  lv_style_set_max_width(&GUI_Style__class_XFv7i18dXeuL3X__, 8000);
  lv_style_set_min_height(&GUI_Style__class_XFv7i18dXeuL3X__, 0);
  lv_style_set_max_height(&GUI_Style__class_XFv7i18dXeuL3X__, 8000);
  lv_style_set_transform_scale_x(&GUI_Style__class_XFv7i18dXeuL3X__, 256);
  lv_style_set_transform_scale_y(&GUI_Style__class_XFv7i18dXeuL3X__, 256);
  lv_style_set_transform_rotation(&GUI_Style__class_XFv7i18dXeuL3X__, 1800);
  lv_style_set_transform_pivot_x(&GUI_Style__class_XFv7i18dXeuL3X__, 46);
  lv_style_set_transform_pivot_y(&GUI_Style__class_XFv7i18dXeuL3X__, 20);
  lv_style_set_pad_all(&GUI_Style__class_XFv7i18dXeuL3X__, 2);
  lv_style_set_flex_flow(&GUI_Style__class_XFv7i18dXeuL3X__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_XFv7i18dXeuL3X__,
                               LV_FLEX_ALIGN_SPACE_BETWEEN);
  lv_style_set_flex_track_place(&GUI_Style__class_XFv7i18dXeuL3X__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_XFv7i18dXeuL3X__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_XFv7i18dXeuL3X__, 0);
  lv_style_set_pad_column(&GUI_Style__class_XFv7i18dXeuL3X__, 11);
  lv_style_set_layout(&GUI_Style__class_XFv7i18dXeuL3X__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_0NpWKLLbkILwhO__);
  lv_style_set_bg_color(&GUI_Style__class_0NpWKLLbkILwhO__,
                        lv_color_make(104, 124, 160));
  lv_style_set_bg_opa(&GUI_Style__class_0NpWKLLbkILwhO__, 255);
  lv_style_set_radius(&GUI_Style__class_0NpWKLLbkILwhO__, 100);
  lv_style_set_shadow_color(&GUI_Style__class_0NpWKLLbkILwhO__,
                            lv_color_make(255, 255, 255));
  lv_style_set_shadow_opa(&GUI_Style__class_0NpWKLLbkILwhO__, 194);
  lv_style_set_shadow_offset_x(&GUI_Style__class_0NpWKLLbkILwhO__, -3);
  lv_style_set_shadow_offset_y(&GUI_Style__class_0NpWKLLbkILwhO__, 1);
  lv_style_set_shadow_width(&GUI_Style__class_0NpWKLLbkILwhO__, 4);
  lv_style_set_shadow_spread(&GUI_Style__class_0NpWKLLbkILwhO__, 0);
  lv_style_set_pad_all(&GUI_Style__class_0NpWKLLbkILwhO__, -2);

  lv_style_init(&GUI_Style__class_vhTDBUljXVQzav__);
  lv_style_set_bg_color(&GUI_Style__class_vhTDBUljXVQzav__,
                        lv_color_make(0, 177, 255));
  lv_style_set_bg_opa(&GUI_Style__class_vhTDBUljXVQzav__, 255);
  lv_style_set_radius(&GUI_Style__class_vhTDBUljXVQzav__, 100);
  lv_style_set_border_color(&GUI_Style__class_vhTDBUljXVQzav__,
                            lv_color_make(25, 28, 36));
  lv_style_set_border_opa(&GUI_Style__class_vhTDBUljXVQzav__, 255);
  lv_style_set_border_width(&GUI_Style__class_vhTDBUljXVQzav__, 4);
  lv_style_set_border_side(&GUI_Style__class_vhTDBUljXVQzav__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_min_width(&GUI_Style__class_vhTDBUljXVQzav__, 0);
  lv_style_set_max_width(&GUI_Style__class_vhTDBUljXVQzav__, 8000);
  lv_style_set_min_height(&GUI_Style__class_vhTDBUljXVQzav__, 0);
  lv_style_set_max_height(&GUI_Style__class_vhTDBUljXVQzav__, 8000);
  lv_style_set_transform_scale_x(&GUI_Style__class_vhTDBUljXVQzav__, 256);
  lv_style_set_transform_scale_y(&GUI_Style__class_vhTDBUljXVQzav__, 256);
  lv_style_set_transform_rotation(&GUI_Style__class_vhTDBUljXVQzav__, 1800);
  lv_style_set_transform_pivot_x(&GUI_Style__class_vhTDBUljXVQzav__, 46);
  lv_style_set_transform_pivot_y(&GUI_Style__class_vhTDBUljXVQzav__, 20);
  lv_style_set_pad_all(&GUI_Style__class_vhTDBUljXVQzav__, 2);
  lv_style_set_flex_flow(&GUI_Style__class_vhTDBUljXVQzav__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_vhTDBUljXVQzav__,
                               LV_FLEX_ALIGN_SPACE_BETWEEN);
  lv_style_set_flex_track_place(&GUI_Style__class_vhTDBUljXVQzav__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_vhTDBUljXVQzav__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_vhTDBUljXVQzav__, 0);
  lv_style_set_pad_column(&GUI_Style__class_vhTDBUljXVQzav__, 11);
  lv_style_set_layout(&GUI_Style__class_vhTDBUljXVQzav__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_ByS7H89fy3XTHd__);
  lv_style_set_bg_color(&GUI_Style__class_ByS7H89fy3XTHd__,
                        lv_color_make(104, 124, 160));
  lv_style_set_bg_opa(&GUI_Style__class_ByS7H89fy3XTHd__, 255);
  lv_style_set_radius(&GUI_Style__class_ByS7H89fy3XTHd__, 100);
  lv_style_set_shadow_color(&GUI_Style__class_ByS7H89fy3XTHd__,
                            lv_color_make(255, 255, 255));
  lv_style_set_shadow_opa(&GUI_Style__class_ByS7H89fy3XTHd__, 194);
  lv_style_set_shadow_offset_x(&GUI_Style__class_ByS7H89fy3XTHd__, -3);
  lv_style_set_shadow_offset_y(&GUI_Style__class_ByS7H89fy3XTHd__, 1);
  lv_style_set_shadow_width(&GUI_Style__class_ByS7H89fy3XTHd__, 4);
  lv_style_set_shadow_spread(&GUI_Style__class_ByS7H89fy3XTHd__, 0);
  lv_style_set_pad_all(&GUI_Style__class_ByS7H89fy3XTHd__, -2);

  lv_style_init(&GUI_Style__class_zAWtnWoaXRDnqy__);
  lv_style_set_bg_color(&GUI_Style__class_zAWtnWoaXRDnqy__,
                        lv_color_make(0, 177, 255));
  lv_style_set_bg_opa(&GUI_Style__class_zAWtnWoaXRDnqy__, 255);
  lv_style_set_radius(&GUI_Style__class_zAWtnWoaXRDnqy__, 100);
  lv_style_set_border_color(&GUI_Style__class_zAWtnWoaXRDnqy__,
                            lv_color_make(25, 28, 36));
  lv_style_set_border_opa(&GUI_Style__class_zAWtnWoaXRDnqy__, 255);
  lv_style_set_border_width(&GUI_Style__class_zAWtnWoaXRDnqy__, 4);
  lv_style_set_border_side(&GUI_Style__class_zAWtnWoaXRDnqy__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_min_width(&GUI_Style__class_zAWtnWoaXRDnqy__, 0);
  lv_style_set_max_width(&GUI_Style__class_zAWtnWoaXRDnqy__, 8000);
  lv_style_set_min_height(&GUI_Style__class_zAWtnWoaXRDnqy__, 0);
  lv_style_set_max_height(&GUI_Style__class_zAWtnWoaXRDnqy__, 8000);
  lv_style_set_transform_scale_x(&GUI_Style__class_zAWtnWoaXRDnqy__, 256);
  lv_style_set_transform_scale_y(&GUI_Style__class_zAWtnWoaXRDnqy__, 256);
  lv_style_set_transform_rotation(&GUI_Style__class_zAWtnWoaXRDnqy__, 1800);
  lv_style_set_transform_pivot_x(&GUI_Style__class_zAWtnWoaXRDnqy__, 46);
  lv_style_set_transform_pivot_y(&GUI_Style__class_zAWtnWoaXRDnqy__, 20);
  lv_style_set_pad_all(&GUI_Style__class_zAWtnWoaXRDnqy__, 2);
  lv_style_set_flex_flow(&GUI_Style__class_zAWtnWoaXRDnqy__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_zAWtnWoaXRDnqy__,
                               LV_FLEX_ALIGN_SPACE_BETWEEN);
  lv_style_set_flex_track_place(&GUI_Style__class_zAWtnWoaXRDnqy__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_zAWtnWoaXRDnqy__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_zAWtnWoaXRDnqy__, 0);
  lv_style_set_pad_column(&GUI_Style__class_zAWtnWoaXRDnqy__, 11);
  lv_style_set_layout(&GUI_Style__class_zAWtnWoaXRDnqy__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_SJOzi5jY7WKvsf__);
  lv_style_set_bg_color(&GUI_Style__class_SJOzi5jY7WKvsf__,
                        lv_color_make(104, 124, 160));
  lv_style_set_bg_opa(&GUI_Style__class_SJOzi5jY7WKvsf__, 255);
  lv_style_set_radius(&GUI_Style__class_SJOzi5jY7WKvsf__, 100);
  lv_style_set_shadow_color(&GUI_Style__class_SJOzi5jY7WKvsf__,
                            lv_color_make(255, 255, 255));
  lv_style_set_shadow_opa(&GUI_Style__class_SJOzi5jY7WKvsf__, 194);
  lv_style_set_shadow_offset_x(&GUI_Style__class_SJOzi5jY7WKvsf__, -3);
  lv_style_set_shadow_offset_y(&GUI_Style__class_SJOzi5jY7WKvsf__, 1);
  lv_style_set_shadow_width(&GUI_Style__class_SJOzi5jY7WKvsf__, 4);
  lv_style_set_shadow_spread(&GUI_Style__class_SJOzi5jY7WKvsf__, 0);
  lv_style_set_pad_all(&GUI_Style__class_SJOzi5jY7WKvsf__, -2);

  lv_style_init(&GUI_Style__class_E2fwCrgSxv1TMQ__);
  lv_style_set_bg_color(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                        lv_color_make(133, 148, 189));
  lv_style_set_bg_opa(&GUI_Style__class_E2fwCrgSxv1TMQ__, 255);
  lv_style_set_bg_grad_color(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                             lv_color_make(96, 109, 142));
  lv_style_set_bg_grad_dir(&GUI_Style__class_E2fwCrgSxv1TMQ__, LV_GRAD_DIR_VER);
  lv_style_set_bg_grad_opa(&GUI_Style__class_E2fwCrgSxv1TMQ__, 255);
  lv_style_set_bg_main_stop(&GUI_Style__class_E2fwCrgSxv1TMQ__, 0);
  lv_style_set_bg_grad_stop(&GUI_Style__class_E2fwCrgSxv1TMQ__, 79);
  lv_style_set_radius(&GUI_Style__class_E2fwCrgSxv1TMQ__, 22);
  lv_style_set_border_color(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                            lv_color_make(26, 29, 37));
  lv_style_set_border_opa(&GUI_Style__class_E2fwCrgSxv1TMQ__, 255);
  lv_style_set_border_width(&GUI_Style__class_E2fwCrgSxv1TMQ__, 3);
  lv_style_set_border_side(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);
  lv_style_set_shadow_color(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                            lv_color_make(15, 15, 15));
  lv_style_set_shadow_opa(&GUI_Style__class_E2fwCrgSxv1TMQ__, 64);
  lv_style_set_shadow_offset_x(&GUI_Style__class_E2fwCrgSxv1TMQ__, -4);
  lv_style_set_shadow_offset_y(&GUI_Style__class_E2fwCrgSxv1TMQ__, 14);
  lv_style_set_shadow_width(&GUI_Style__class_E2fwCrgSxv1TMQ__, 14);
  lv_style_set_shadow_spread(&GUI_Style__class_E2fwCrgSxv1TMQ__, 0);
  lv_style_set_pad_left(&GUI_Style__class_E2fwCrgSxv1TMQ__, 10);
  lv_style_set_pad_right(&GUI_Style__class_E2fwCrgSxv1TMQ__, 10);
  lv_style_set_pad_top(&GUI_Style__class_E2fwCrgSxv1TMQ__, 15);
  lv_style_set_pad_bottom(&GUI_Style__class_E2fwCrgSxv1TMQ__, 15);
  lv_style_set_flex_flow(&GUI_Style__class_E2fwCrgSxv1TMQ__, LV_FLEX_FLOW_ROW);
  lv_style_set_flex_main_place(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                               LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_track_place(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_E2fwCrgSxv1TMQ__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_E2fwCrgSxv1TMQ__, 0);
  lv_style_set_pad_column(&GUI_Style__class_E2fwCrgSxv1TMQ__, 25);
  lv_style_set_layout(&GUI_Style__class_E2fwCrgSxv1TMQ__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_1MczpGC0nfmYQf__);
  lv_style_set_bg_color(&GUI_Style__class_1MczpGC0nfmYQf__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_1MczpGC0nfmYQf__, 0);
  lv_style_set_radius(&GUI_Style__class_1MczpGC0nfmYQf__, 0);

  lv_style_init(&GUI_Style__class_GhfWdNvD4yeC9W__);
  lv_style_set_text_font(&GUI_Style__class_GhfWdNvD4yeC9W__, &inter_20_700);
  lv_style_set_text_letter_space(&GUI_Style__class_GhfWdNvD4yeC9W__, 0);
  lv_style_set_text_line_space(&GUI_Style__class_GhfWdNvD4yeC9W__, 0);
  lv_style_set_text_align(&GUI_Style__class_GhfWdNvD4yeC9W__,
                          LV_TEXT_ALIGN_LEFT);
  lv_style_set_text_color(&GUI_Style__class_GhfWdNvD4yeC9W__,
                          lv_color_make(171, 193, 237));
  lv_style_set_text_opa(&GUI_Style__class_GhfWdNvD4yeC9W__, 255);

  lv_style_init(&GUI_Style__class_pPvtrFmvUwYeOa__);
  lv_style_set_bg_color(&GUI_Style__class_pPvtrFmvUwYeOa__,
                        lv_color_make(25, 29, 38));
  lv_style_set_bg_opa(&GUI_Style__class_pPvtrFmvUwYeOa__, 255);
  lv_style_set_radius(&GUI_Style__class_pPvtrFmvUwYeOa__, 0);
  lv_style_set_pad_all(&GUI_Style__class_pPvtrFmvUwYeOa__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_pPvtrFmvUwYeOa__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_pPvtrFmvUwYeOa__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_pPvtrFmvUwYeOa__,
                                LV_FLEX_ALIGN_START);
  lv_style_set_flex_cross_place(&GUI_Style__class_pPvtrFmvUwYeOa__,
                                LV_FLEX_ALIGN_START);
  lv_style_set_pad_row(&GUI_Style__class_pPvtrFmvUwYeOa__, 88);
  lv_style_set_pad_column(&GUI_Style__class_pPvtrFmvUwYeOa__, 0);
  lv_style_set_layout(&GUI_Style__class_pPvtrFmvUwYeOa__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_ZbgRQ2OXkMnawA__);
  lv_style_set_bg_color(&GUI_Style__class_ZbgRQ2OXkMnawA__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_ZbgRQ2OXkMnawA__, 0);

  lv_style_init(&GUI_Style__class_ZFFRHfzMDkC9FM__);
  lv_style_set_bg_color(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                        lv_color_make(5, 86, 105));
  lv_style_set_bg_opa(&GUI_Style__class_ZFFRHfzMDkC9FM__, 255);
  lv_style_set_bg_grad_color(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                             lv_color_make(9, 170, 207));
  lv_style_set_bg_grad_dir(&GUI_Style__class_ZFFRHfzMDkC9FM__, LV_GRAD_DIR_HOR);
  lv_style_set_bg_grad_opa(&GUI_Style__class_ZFFRHfzMDkC9FM__, 255);
  lv_style_set_bg_main_stop(&GUI_Style__class_ZFFRHfzMDkC9FM__, 0);
  lv_style_set_bg_grad_stop(&GUI_Style__class_ZFFRHfzMDkC9FM__, 255);
  lv_style_set_radius(&GUI_Style__class_ZFFRHfzMDkC9FM__, 0);
  lv_style_set_pad_all(&GUI_Style__class_ZFFRHfzMDkC9FM__, 0);
  lv_style_set_flex_flow(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                         LV_FLEX_FLOW_COLUMN);
  lv_style_set_flex_main_place(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                               LV_FLEX_ALIGN_START);
  lv_style_set_flex_track_place(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_flex_cross_place(&GUI_Style__class_ZFFRHfzMDkC9FM__,
                                LV_FLEX_ALIGN_CENTER);
  lv_style_set_pad_row(&GUI_Style__class_ZFFRHfzMDkC9FM__, 10);
  lv_style_set_pad_column(&GUI_Style__class_ZFFRHfzMDkC9FM__, 0);
  lv_style_set_layout(&GUI_Style__class_ZFFRHfzMDkC9FM__, LV_LAYOUT_FLEX);

  lv_style_init(&GUI_Style__class_IO82d3XB7h4kyW__);
  lv_style_set_bg_color(&GUI_Style__class_IO82d3XB7h4kyW__,
                        lv_color_make(5, 86, 105));
  lv_style_set_bg_opa(&GUI_Style__class_IO82d3XB7h4kyW__, 255);
  lv_style_set_bg_grad_color(&GUI_Style__class_IO82d3XB7h4kyW__,
                             lv_color_make(9, 170, 207));
  lv_style_set_bg_grad_dir(&GUI_Style__class_IO82d3XB7h4kyW__, LV_GRAD_DIR_HOR);
  lv_style_set_bg_grad_opa(&GUI_Style__class_IO82d3XB7h4kyW__, 255);
  lv_style_set_bg_main_stop(&GUI_Style__class_IO82d3XB7h4kyW__, 0);
  lv_style_set_bg_grad_stop(&GUI_Style__class_IO82d3XB7h4kyW__, 255);
  lv_style_set_radius(&GUI_Style__class_IO82d3XB7h4kyW__, 0);
  lv_style_set_border_color(&GUI_Style__class_IO82d3XB7h4kyW__,
                            lv_color_make(26, 188, 254));
  lv_style_set_border_opa(&GUI_Style__class_IO82d3XB7h4kyW__, 255);
  lv_style_set_border_width(&GUI_Style__class_IO82d3XB7h4kyW__, 0);
  lv_style_set_border_side(&GUI_Style__class_IO82d3XB7h4kyW__,
                           LV_BORDER_SIDE_TOP | LV_BORDER_SIDE_RIGHT |
                               LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_LEFT);

  lv_style_init(&GUI_Style__class_NLv554sCvxU5cC__);
  lv_style_set_bg_color(&GUI_Style__class_NLv554sCvxU5cC__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_NLv554sCvxU5cC__, 0);

  lv_style_init(&GUI_Style__class_69q4x3bsRpemIi__);
  lv_style_set_bg_color(&GUI_Style__class_69q4x3bsRpemIi__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_69q4x3bsRpemIi__, 0);

  lv_style_init(&GUI_Style__class_woDgThDqv8aUNx__);
  lv_style_set_bg_color(&GUI_Style__class_woDgThDqv8aUNx__,
                        lv_color_make(0, 0, 0));
  lv_style_set_bg_opa(&GUI_Style__class_woDgThDqv8aUNx__, 0);
  lv_style_set_radius(&GUI_Style__class_woDgThDqv8aUNx__, 0);
}
