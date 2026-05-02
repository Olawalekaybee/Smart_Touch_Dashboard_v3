SET( SOURCES
    assets/fonts/inter_10_400.c
    assets/fonts/inter_13_400.c
    assets/fonts/inter_13_700.c
    assets/images/upload_screenbg_601_271_800x480_bf405e457e31464bb349859088b9c282_png.c
    assets/images/upload_topbarbg_601_273_800x36_1db5570cbe9243318ceb17dd40d43a95_png.c
    assets/images/upload_topbarborder_601_274_800x0_2cfdfb3a9037415da2f91dc179a268a7_png.c
    assets/images/upload_vector_601_276_0x18_2da2e6d283af4f2e9e9001bc1e0bc521_png.c
    assets/images/upload_vector_601_278_6x6_4b272d7848a442418cab7d7fc8e1c31d_png.c
    assets/images/upload_vector_601_281_6x6_4de9e84a153a4ae6a6953fb2b9c4e478_png.c
    assets/images/upload_vector_601_284_6x6_15a64f7884e947ce89328c968979a002_png.c
    assets/images/upload_vector_601_520_800x1_f0e4ef6e7534416fbc4b103c3cf94c74_png.c
    assets/images/upload_vector_601_521_800x1_b373937b410840648e206236a313357c_png.c
    assets/images/upload_vector_601_522_800x1_e69d10481a614bdd9ac8c92cd22ccf67_png.c
    assets/images/upload_vector_601_523_800x1_808f60f6557940c6bc5652276f26d220_png.c
    assets/images/upload_vector_601_524_800x1_457e1d92fd5846e4a9cdbc1576d5db06_png.c
    assets/images/upload_vector_601_525_800x1_68edb2a554cc4ea2b3f1b64ec62fc6ea_png.c
    assets/images/upload_vector_601_527_799x479_e9c7fa9a021640f6b1b4f8799b847164_png.c
    assets/styles/global_styles.c
    behavior/animations.c
    behavior/events.c
    core/gui_core.c
    core/variables.c
    helpers/ui_helpers.c
    screens/iot_cyd_800x480_dashboard_1.c
)

add_library( GUI ${SOURCES} )

