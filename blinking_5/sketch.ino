//code 1:
int red = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(red, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
}
