#include <dht11.h>
#define DHT11PIN 4

dht11 DHT11;

void  setup()
{
  Serial.begin(9600);
 
}

void loop()
{

  float maxi = 999;
  float lowi = -173;
  while(1){ 
    Serial.println();

    int chk = DHT11.read(DHT11PIN);

    if(DHT11.temperature > maxi)
        maxi = DHT11.temperature;
    if(DHT11.temperature<lowi)
      lowi=DHT11.temperature;
    Serial.print(" Current Temperature  (C): ");
    Serial.println((float)DHT11.temperature, 2);
    Serial.print("Maximum tempreture is ");
    Serial.println(maxi);
    Serial.print("Minimum tempreture is ");
    Serial.println(lowi);

    delay(2000);
  }

}