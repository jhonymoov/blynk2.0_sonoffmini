// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID           ""
#define BLYNK_DEVICE_NAME           ""

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG


// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD

#include "BlynkEdgent.h"

#include <ESP8266WiFi.h>





void setup() {
  
    Serial.begin(115200);
    delay(100);
    BlynkEdgent.begin();
     


}


void loop() {
  // cuida da conexão com o rede e a nuvem e alimenta o sensor
    BlynkEdgent.run();
         }


