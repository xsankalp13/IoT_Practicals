// INPUT: Potentiometer should be connected to 5V and GND
int potPin_1 = A1;
int potPin_2 = A2;
int potPin_3 = A3;

int potVal_1 = 0;
int potVal_2 = 0;
int potVal_3 = 0; 

// OUTPUT: Use digital pins 9-11, the Pulse-width Modulation (PWM) pins
// LED's cathodes should be connected to digital GND
int redPin = 4;   // Red LED,   connected to digital pin 9
int grnPin = 3;  // Green LED, connected to digital pin 10
int bluPin = 2;  // Blue LED,  connected to digital pin 11


void setup()
{
  pinMode(redPin, OUTPUT);   // sets the pins as output
  pinMode(grnPin, OUTPUT);   
  pinMode(bluPin, OUTPUT); 
}

// Main program
void loop()
{
  potVal_1 = analogRead(potPin_1);
  potVal_2 = analogRead(potPin_2);
  potVal_3 = analogRead(potPin_3);   // read the potentiometer value at the input pin

  if (potVal_1 > 0)  // Lowest third of the potentiometer's range (0-340)
  {                  
      digitalWrite(redPin, HIGH);
  }
  else if(potVal_1 == 0){
    digitalWrite(redPin, LOW);
  }
  if (potVal_3 > 0)  // Lowest third of the potentiometer's range (0-340)
  {                  
      digitalWrite(bluPin, HIGH);
  }
  else if(potVal_3 == 0){
    digitalWrite(bluPin, LOW);
  }
  if (potVal_2 > 0)  // Lowest third of the potentiometer's range (0-340)
  {                  
      digitalWrite(grnPin, HIGH);
  }
  else if(potVal_2 == 0){
    digitalWrite(grnPin, LOW);
  }
}