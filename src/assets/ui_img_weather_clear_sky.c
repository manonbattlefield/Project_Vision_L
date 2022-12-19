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

#ifndef LV_ATTRIBUTE_IMG_UI_IMG_WEATHER_CLEAR_SKY
#define LV_ATTRIBUTE_IMG_UI_IMG_WEATHER_CLEAR_SKY
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UI_IMG_WEATHER_CLEAR_SKY uint8_t ui_img_weather_clear_sky_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0x4a, 0xdc, 0xff, 0x31, 	/*Color of index 1*/
  0x49, 0xdb, 0xff, 0x6c, 	/*Color of index 2*/
  0x49, 0xdc, 0xff, 0xfd, 	/*Color of index 3*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x40, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x0b, 0xe0, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x0b, 0xd0, 0x00, 
  0x00, 0x07, 0xf8, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x2f, 0xd0, 0x00, 
  0x00, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x80, 0x00, 
  0x00, 0x00, 0xbf, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x2f, 0xd0, 0x00, 0x5a, 0xa5, 0x00, 0x07, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x0b, 0xd0, 0x0a, 0xff, 0xff, 0x90, 0x07, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x40, 0x7f, 0xff, 0xff, 0xfd, 0x01, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0b, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 
  0x55, 0x55, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x55, 0x55, 
  0xff, 0xff, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 
  0xff, 0xff, 0x42, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 
  0x55, 0x55, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x55, 0x55, 
  0x00, 0x00, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x02, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x40, 0x7f, 0xff, 0xff, 0xfd, 0x01, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x0b, 0xd0, 0x07, 0xff, 0xff, 0xa0, 0x07, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x2f, 0xd0, 0x00, 0x5a, 0xa5, 0x00, 0x07, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0xbf, 0x80, 0x00, 0x00, 0x00, 0x00, 0x02, 0xfe, 0x00, 0x00, 
  0x00, 0x02, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x80, 0x00, 
  0x00, 0x0b, 0xf8, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x2f, 0xd0, 0x00, 
  0x00, 0x0b, 0xe0, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x0b, 0xd0, 0x00, 
  0x00, 0x02, 0x40, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x01, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t ui_img_weather_clear_sky = {
  .header.cf = LV_IMG_CF_INDEXED_2BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 48,
  .header.h = 48,
  .data_size = 592,
  .data = ui_img_weather_clear_sky_map,
};
