
int red = 7;
int yellow = 6;
int green = 5;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Enter the Your choice (r , y , b): ");
  while(Serial.available() == 0){

  }
  char ch = Serial.read();
  if(ch == 'r'){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
  }
  else if(ch == 'y'){
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
  }
  else if(ch == 'g'){
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
  }
  else if(ch == 'b'){
    for(int i=0;i<10;i++){
      delay(500);
      digitalWrite(red, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(yellow, HIGH);
      delay(500);
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
    }
  }
}
