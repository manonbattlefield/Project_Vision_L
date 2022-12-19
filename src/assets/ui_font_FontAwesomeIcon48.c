/*******************************************************************************
 * Size: 48 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#include "lvgl.h"

#ifndef UI_FONT_FONTAWESOMEICON48
#define UI_FONT_FONTAWESOMEICON48 1
#endif

#if UI_FONT_FONTAWESOMEICON48

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+F03E "" */
    0x0, 0x46, 0xff, 0xff, 0xf7, 0x36, 0x0, 0x2c,
    0x72, 0x0, 0xff, 0xee, 0x13, 0xe0, 0x41, 0x80,
    0x7f, 0xf8, 0xe, 0x14, 0x3, 0xff, 0xc4, 0xa4,
    0x1, 0xff, 0xe2, 0x20, 0xf, 0xcb, 0x57, 0x4a,
    0x1, 0xff, 0xdd, 0x1c, 0xa5, 0x45, 0xac, 0x10,
    0xf, 0xfe, 0xde, 0x98, 0x7, 0x1e, 0x80, 0x7f,
    0xf6, 0x94, 0xc0, 0x3e, 0x35, 0x0, 0xff, 0xec,
    0xf8, 0x7, 0xf7, 0x80, 0x7f, 0xf6, 0x44, 0x3,
    0xf8, 0x40, 0x3f, 0xfb, 0x22, 0x1, 0xfc, 0x20,
    0x1f, 0xfc, 0x31, 0xdd, 0x8, 0x7, 0xff, 0x1b,
    0xc0, 0x3f, 0xbc, 0x3, 0xff, 0x84, 0x38, 0x44,
    0xc1, 0x0, 0xff, 0xe2, 0xa9, 0x80, 0x7c, 0x6a,
    0x1, 0xff, 0xc1, 0x1c, 0x20, 0x1, 0x60, 0x80,
    0x7f, 0xf1, 0x74, 0xc0, 0x38, 0xf4, 0x3, 0xff,
    0x82, 0x38, 0x40, 0x18, 0xb0, 0x40, 0x3f, 0xf8,
    0x83, 0x94, 0xa8, 0xb5, 0x82, 0x1, 0xff, 0xc0,
    0x1c, 0x20, 0xf, 0x16, 0x8, 0x7, 0xff, 0x15,
    0x6a, 0xe9, 0x40, 0x3f, 0xf8, 0x23, 0x84, 0x1,
    0xf8, 0xb0, 0x40, 0x3f, 0xfa, 0xa3, 0x84, 0x1,
    0xfe, 0x2c, 0x10, 0xf, 0xfe, 0x38, 0xc0, 0x80,
    0x7f, 0xe, 0x10, 0x7, 0xff, 0x0, 0xb0, 0x40,
    0x3f, 0xf8, 0xa3, 0x8f, 0x82, 0x1, 0xf0, 0xe1,
    0x0, 0x7f, 0xf0, 0x8b, 0x0, 0x3f, 0xf8, 0x83,
    0x84, 0x5, 0x82, 0x1, 0xc3, 0x84, 0x1, 0xff,
    0xc4, 0x20, 0xf, 0xfe, 0x18, 0xe1, 0x0, 0x45,
    0x82, 0x1, 0xe, 0x10, 0x7, 0xff, 0x50, 0x70,
    0x80, 0x38, 0xb0, 0x40, 0x70, 0x80, 0x3f, 0xfa,
    0x83, 0x84, 0x1, 0xf1, 0x61, 0xe1, 0x0, 0x7f,
    0xf5, 0x7, 0x8, 0x3, 0xf8, 0xb0, 0x80, 0x3f,
    0xfa, 0xb8, 0x40, 0x1f, 0xfe, 0x22, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xfb, 0xbf,
    0xff, 0xfd, 0x80, 0xf, 0xff, 0x51, 0x0, 0x7f,
    0xf8, 0x89, 0x40, 0x3f, 0xfc, 0x4b, 0x6, 0x1,
    0xff, 0xe0, 0x38, 0xc, 0x72, 0x0, 0xff, 0xee,
    0x13, 0xe0, 0x0,

    /* U+F7C2 "" */
    0x0, 0xff, 0xa3, 0xff, 0xff, 0x8f, 0x8c, 0x1,
    0xff, 0xc1, 0x87, 0x0, 0xff, 0xe3, 0x9c, 0xe0,
    0x80, 0x7f, 0xa1, 0xc0, 0x3f, 0xf9, 0x47, 0xa0,
    0x1f, 0xd0, 0xe0, 0x1f, 0xfc, 0xc3, 0x60, 0xf,
    0xa1, 0xc0, 0x3f, 0xf9, 0xd4, 0x1, 0xe8, 0x70,
    0xf, 0xfe, 0x79, 0x80, 0x74, 0x38, 0x4, 0xff,
    0xf8, 0x2, 0xff, 0xc8, 0x0, 0xbf, 0xfc, 0x1,
    0xfe, 0x87, 0x0, 0xff, 0xea, 0xc3, 0x80, 0x7f,
    0xf5, 0x61, 0xc0, 0x3f, 0xfa, 0xb0, 0xe0, 0x1f,
    0xfd, 0x58, 0x70, 0xf, 0xfe, 0xb3, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xfb, 0xcf, 0xff, 0x80, 0x2f,
    0xfc, 0x80, 0xb, 0xff, 0xc0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0x8c, 0x3,
    0xff, 0xac, 0x74, 0x1, 0xff, 0xd6, 0xa6, 0x30,
    0xf, 0xfe, 0xa1, 0xb0, 0x69, 0x80, 0x7f, 0xf4,
    0x8f, 0x40, 0x3, 0x92, 0x60, 0x1f, 0xfc, 0xe3,
    0x9c, 0x10
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 768, .box_w = 48, .box_h = 36, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 576, .box_w = 36, .box_h = 48, .ofs_x = 0, .ofs_y = -6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x784
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 61502, .range_length = 1925, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_FontAwesomeIcon48 = {
#else
lv_font_t ui_font_FontAwesomeIcon48 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 48,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -17,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONTAWESOMEICON48*/

