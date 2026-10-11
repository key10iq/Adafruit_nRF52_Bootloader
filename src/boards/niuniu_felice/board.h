#ifndef _NIUNIU_FELICE_H
#define _NIUNIU_FELICE_H

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER          1
#define LED_PRIMARY_PIN      PINNUM(0, 6) // Dummy pin (unused)
#define LED_STATE_ON         1

// SK6812MINI-E RGB LEDs (10 pcs)
#define LED_NEOPIXEL         PINNUM(0, 3)
#define NEOPIXEL_POWER_PIN   PINNUM(0, 2)
#define NEOPIXELS_NUMBER     10
#define BOARD_RGB_BRIGHTNESS 0x040404

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// This board has only a Reset button (Double Reset used for DFU entry)

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Niuniu"
#define BLEDIS_MODEL        "Felice"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x1d50
#define USB_DESC_UF2_PID      0x615e
#define USB_DESC_CDC_ONLY_PID 0x615e

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "Niuniu Felice"
#define UF2_VOLUME_LABEL      "FELICE"
#define UF2_BOARD_ID          "nRF52833-Niuniu-Felice"
#define UF2_INDEX_URL         "https://github.com"

#endif // _NIUNIU_FELICE_H
