void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the Number: ");
  while(Serial.available() == 0){

  }
  int num = Serial.parseInt();
  Serial.println(num*num);


}
