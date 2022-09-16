


#include <Arduino.h>
#define GREENLED 13
unsigned long myTime;
void setup() {
 Serial.begin(115200);
 Serial.println("\n \nHello World");
 Serial.println("Yash Khanduja, 000826385");
 Serial.printf("ESP6288 Chip ID: %d\n", ESP.getChipId());
 Serial.printf("Flash Chip ID: %d\n\n", ESP.getFlashChipId());

}

void loop() {
  Serial.print("Time: ");
  myTime = millis();
  Serial.println(myTime);
  delay(2000);
}
