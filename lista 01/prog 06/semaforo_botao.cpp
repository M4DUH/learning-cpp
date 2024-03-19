int led_vermelho = 2;
int led_amarelo = 3;
int led_verde = 4;
int led_ped_vermelho = 5;
int led_ped_verde = 6;
int buttonPin = 7;
int buttonState = 0;

void setup (){
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_ped_vermelho, OUTPUT);
  pinMode(led_ped_verde, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  digitalWrite(led_ped_vermelho, LOW);
  digitalWrite(led_ped_verde, LOW);
}

void loop (){  
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    delay(500);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_amarelo, HIGH);
    digitalWrite(led_ped_vermelho, HIGH);
    delay(5000);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_ped_vermelho, LOW);
    digitalWrite(led_ped_verde, HIGH);
    delay(10000);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_ped_verde, LOW);
  }
  else {
   digitalWrite(led_verde, HIGH);
   digitalWrite(led_ped_vermelho, HIGH);  
  }
}
