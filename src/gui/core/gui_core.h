#ifndef _GUI_CORE_H
#define _GUI_CORE_H

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Screen-specific function declarations
void GUI_initScreen__new_device_1();
void GUI_initScreenTexts__new_device_1();
void GUI_initScreenStyles__new_device_1();

extern lv_style_t GUI_Style__class_we1nBmmtYVN8wu__;
extern lv_style_t GUI_Style__class_rpwBQUYdObB71R__;
extern lv_style_t GUI_Style__class_4r3zkJeAD2V5FV__;
extern lv_style_t GUI_Style__class_6nwtUllpYNTH2t__;
extern lv_style_t GUI_Style__class_WfOUflcFjxkEPn__;
extern lv_style_t GUI_Style__class_oDPXe1EYoMg90B__;
extern lv_style_t GUI_Style__class_ldk2m3Wdlb5uQN__;
extern lv_style_t GUI_Style__class_45XRfV4LUS0SFS__;
extern lv_style_t GUI_Style__class_IMCRbCjoBMdmQt__;
extern lv_style_t GUI_Style__class_i6rwLzwSGRTUZp__;
extern lv_style_t GUI_Style__class_7wLiNneiOruSfb__;
extern lv_style_t GUI_Style__class_PfudEwsb7EfVte__;
extern lv_style_t GUI_Style__class_MYvsbDrxw1tkHJ__;
extern lv_style_t GUI_Style__class_EijlFFU0rCXCRj__;
extern lv_style_t GUI_Style__class_UedBfm2l2r0pMD__;
extern lv_style_t GUI_Style__class_UcrjY5OUVsbO8C__;
extern lv_style_t GUI_Style__class_Wu039vHE1nZ7us__;
extern lv_style_t GUI_Style__class_sEk2APvKKadYiS__;
extern lv_style_t GUI_Style__class_BcRLBCF1YKFa7c__;
extern lv_style_t GUI_Style__class_MmQpcGC8gmvggJ__;
extern lv_style_t GUI_Style__class_OVu0KB6OxEoqbU__;
extern lv_style_t GUI_Style__class_XFv7i18dXeuL3X__;
extern lv_style_t GUI_Style__class_0NpWKLLbkILwhO__;
extern lv_style_t GUI_Style__class_vhTDBUljXVQzav__;
extern lv_style_t GUI_Style__class_ByS7H89fy3XTHd__;
extern lv_style_t GUI_Style__class_zAWtnWoaXRDnqy__;
extern lv_style_t GUI_Style__class_SJOzi5jY7WKvsf__;
extern lv_style_t GUI_Style__class_E2fwCrgSxv1TMQ__;
extern lv_style_t GUI_Style__class_1MczpGC0nfmYQf__;
extern lv_style_t GUI_Style__class_GhfWdNvD4yeC9W__;
extern lv_style_t GUI_Style__class_pPvtrFmvUwYeOa__;
extern lv_style_t GUI_Style__class_ZbgRQ2OXkMnawA__;
extern lv_style_t GUI_Style__class_ZFFRHfzMDkC9FM__;
extern lv_style_t GUI_Style__class_IO82d3XB7h4kyW__;
extern lv_style_t GUI_Style__class_NLv554sCvxU5cC__;
extern lv_style_t GUI_Style__class_69q4x3bsRpemIi__;
extern lv_style_t GUI_Style__class_woDgThDqv8aUNx__;

void GUI_load();

void GUI_init();

void GUI_refresh();

void GUI_initHAL();
void HAL_init();

void GUI_initFramework();

void GUI_loadContent();

void GUI_initContent();

void GUI_initTheme();

void GUI_initScreens();

void GUI_loadFirstScreen();

void GUI_initScreenContents();

void GUI_initScreenTexts();

void GUI_initScreenStyles();

void GUI_initGlobalStyles();

void GUI_initAnimations();

void GUI_event__Screen__new_device_1__Clicked(lv_event_t *event);
void GUI_event__Container__new_device_1__Frame_427318171__Clicked(
    lv_event_t *event);
void GUI_event__Roller__new_device_1__Frame_427318176__Scroll(
    lv_event_t *event);
void GUI_event__Roller__new_device_1__Frame_427318182__Clicked(
    lv_event_t *event);
void GUI_event__Roller__new_device_1__Frame_427318183__Clicked(
    lv_event_t *event);
void GUI_event__Switch__new_device_1__Toggle___Switch_2__Clicked(
    lv_event_t *event);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
