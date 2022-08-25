#include <Arduino.h>

// hardware: LilyGO TTGO-T-Display v1.1
// https://github.com/Xinyuan-LilyGO/TTGO-T-Display

#define EXT_HALL 33

#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup() {
    Serial.begin(115200);
    Serial.println("water_meter_reader");
    tft.init();
    tft.setRotation(2);
    tft.setTextFont(2);
    tft.setTextPadding(tft.textWidth("ANY HALL 0000"));
    tft.fillScreen(TFT_BLACK);
    analogSetWidth(12);
    analogSetAttenuation(ADC_11db);
}

void loop() {
    int ext_hall = analogReadMilliVolts(EXT_HALL);
    int int_hall = hallRead();
    Serial.print("EXT HALL    ");
    Serial.println(ext_hall);
    Serial.print("INT HALL    ");
    Serial.println(int_hall);
    tft.setCursor(5, 5);
    tft.print("EXT HALL ");
    tft.print(ext_hall);
    tft.setCursor(5, 5 + tft.fontHeight()*2);
    tft.print("INT HALL ");
    tft.print(int_hall);
    delay(100);
}
