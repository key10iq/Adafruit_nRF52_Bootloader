#ifndef _TK44_H
#define _TK44_H

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER     1
#define LED_PRIMARY_PIN PINNUM(0, 23)
#define LED_STATE_ON    1 // State when LED is lit (active HIGH)

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// This board has only a Reset button

// The board has no decoupling capacitors, so pressing Reset browns the chip out instead of a
// clean pin reset: RAM and RESETREAS are lost and the RAM-based double reset never fires.
// Keep the double reset flag in flash instead (see main.c). This is the last page of the
// app data area below the bootloader, which UF2 never writes and RMK doesn't use.
#define DFU_DBL_RESET_FLASH_ADDR 0xF3000

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "Custom"
#define BLEDIS_MODEL        "TK44"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x1209
#define USB_DESC_UF2_PID      0x7444
#define USB_DESC_CDC_ONLY_PID 0x7444

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "TK44"
#define UF2_VOLUME_LABEL      "TK44BOOT"
#define UF2_BOARD_ID          "nRF52840-TK44"
#define UF2_INDEX_URL         "https://github.com"

#endif // _TK44_H
