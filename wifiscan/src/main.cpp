#include <Arduino.h>
#include <wifi.h>

const char *ssid = "iPhone15proMax";
const char *password= "m12345678m";

// put function declarations here:
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
     }
     Serial.println("WiFi Connected");
     Serial.print("My IP= ");
     Serial.print(WiFi.localIP());
     Serial.print("Submask= ");
     Serial.println(WiFi.subnetMask());
 }
  
void loop() {
  // put your main code here, to run repeatedly:
}

