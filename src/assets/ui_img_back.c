#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_UI_IMG_BACK
#define LV_ATTRIBUTE_IMG_UI_IMG_BACK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UI_IMG_BACK uint8_t ui_img_back_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0x55, 0x43, 0x3a, 0x27, 	/*Color of index 1*/
  0x55, 0x42, 0x3a, 0x85, 	/*Color of index 2*/
  0x55, 0x42, 0x3b, 0xf8, 	/*Color of index 3*/

  0x00, 0x00, 0x24, 0x00, 0x00, 
  0x00, 0x00, 0xb4, 0x00, 0x00, 
  0x00, 0x02, 0xe0, 0x00, 0x00, 
  0x00, 0x0b, 0xe0, 0x00, 0x00, 
  0x00, 0x6f, 0xe9, 0x50, 0x00, 
  0x01, 0xff, 0xff, 0xfa, 0x00, 
  0x0b, 0xff, 0xff, 0xff, 0xd0, 
  0x7f, 0xff, 0xff, 0xff, 0xf4, 
  0xbf, 0xff, 0xff, 0xff, 0xfd, 
  0x1b, 0xff, 0xff, 0xff, 0xfe, 
  0x01, 0xbf, 0xfa, 0xaf, 0xfe, 
  0x00, 0x2f, 0xe0, 0x06, 0xff, 
  0x00, 0x07, 0xe0, 0x00, 0xbf, 
  0x00, 0x01, 0xf0, 0x00, 0x7f, 
  0x00, 0x00, 0x64, 0x00, 0x7e, 
  0x00, 0x00, 0x14, 0x00, 0xbd, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 
  0x00, 0x00, 0x00, 0x07, 0xe0, 
  0x00, 0x00, 0x01, 0xaf, 0x40, 
  0x00, 0x01, 0x5a, 0xa4, 0x00, 
};

const lv_img_dsc_t ui_img_back = {
  .header.cf = LV_COLOR_FORMAT_I2,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 116,
  .data = ui_img_back_map,
};
