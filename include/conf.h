#ifndef _VISION_CONFIGURATIONS_H_
#define _VISION_CONFIGURATIONS_H_

#define VIDEO_FPS 30


#define LCD_WIDTH 240
#define LCD_HEIGHT 240

#define LCD_PIXEL_CLOCK_HZ (80 * 1000 * 1000)
#define LCD_CMD_BITS           8
#define LCD_PARAM_BITS         8

// Proximiter / Lightingmeter type
#define _CONFIG_PROX_LIGHT_USE_APDS9930_
// #define _CONFIG_PROX_LIGHT_USE_APDS9960_

// Parameters for proximeter
#ifdef _CONFIG_PROX_LIGHT_USE_APDS9960_
#define PROX_LIGHT_METER APDS9960
#define PROX_THRS 120      // Proximeter interrupt threshold (Smaller value is further)
#define LCD_BRIGHTNESS 127 // Default screen brightness, Value in 0-255
#elif defined( _CONFIG_PROX_LIGHT_USE_APDS9930_)
#define PROX_LIGHT_METER APDS9930
#define PROX_THRS 210      // Proximeter interrupt threshold (Smaller value is further)
#define LCD_BRIGHTNESS 127 // Default screen brightness, Value in 0-255
#endif

// Parameters for accelerometer
#define ACC_SAMPLE_RATE 6.25 // Sample rate in HZ -> {0.781, 1.563, 3.125, 6.25, 12.5, 25, 50, 100, 200, 400, 800, 1600Hz}
#define ACC_RANGE 2          // Accelerometer range -> {2, 4, 8, 16g}
#define ACC_THRES 0.4        // Threshold of screen rotation
#define LOW_POWER            // Accelerometer Power mode -> {LOW_POWER, HIGH_RESOLUTION}

// MJPEG decoder settings
#define MJPEG_BUFFER_SIZE (240 * 240 * 2 / 8) // Screen resolution 240*240, 2 byte color, compression ratio 1:16

// LVGL Drive Letter
#define SD_DRIVE_LETTER 'S'
#define FLASH_DRIVE_LETTER 'F'

// Updating
#define UPDATE_FILE_PATH "/update.bin"

// JSON conf buffer size
#define JSON_CONF_BUFFER_SIZE 1024

/* Play List File */
#define PLAY_LIST_CONF_PATH "/playFiles.json"
#define PLAY_LIST_DEFAULT_CONF "{\"files\":[]}"
#define PLAY_LIST_CONF_DEFAULT_LENGTH 1024
#define PLAY_LIST_JSON_SIZE 1024

/* Hoyolab cookie */
#define HOYOLAB_CONF_PATH "/Hoyolab.json"
#define HOYOLAB_DEFAULT_CONF "{\"uid\":\"\", \"cookie\":\"\", \"device_guid\": \"\"}"
#define HOYOLAB_CONF_DEFAULT_LENGTH 1024
#define HOYOLAB_CONF_JSON_SIZE 1024

#endif // _VISION_CONFIGURATIONS_H_