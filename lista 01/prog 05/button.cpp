int ledPin = 4;
int buttonPin = 12;
int estadoButton = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  estadoButton = digitalRead(buttonPin);
  if (estadoButton==HIGH){
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
