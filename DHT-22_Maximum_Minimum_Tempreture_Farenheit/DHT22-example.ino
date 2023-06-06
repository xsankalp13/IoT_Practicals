#include "DHT.h"

#define DHTPIN 2     
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT22 example!"));

  dht.begin();
}

void loop() {
  float maxi = -173;
  float mini = 1999;   
  while(1){
    float temperature = dht.readTemperature();
    
    if(temperature>maxi)
        maxi = temperature;
    if(temperature<mini)
      mini = temperature;
    
    if (isnan(temperature)) {
      Serial.println(F("Failed to read from DHT sensor!"));
      return;
    }
    float fhr = (temperature * 9/5) + 32;
    Serial.print(F("%  Temperature: "));
    Serial.print(temperature);
    Serial.println(F("°C "));

    Serial.print(F("%  Temperature: "));
    Serial.print(fhr);
    Serial.println(F("°F "));
    Serial.println("Maximum Tempreture recorded is : ");
    Serial.println(maxi);
    Serial.println("Minimum Tempreture recorded is : ");
    Serial.println(mini);
    delay(2000);
  }
}