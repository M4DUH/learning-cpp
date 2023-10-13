// Objetivo: fazer um ultrassônico em conjunto com buzzer.


int pinTrig = 13;
int pinEcho = 12;
float tempoEcho = 0;
const float velocidadeSom = 0.00034029;
const int Buzzer = 2;
int distancia;


void setup() {
  pinMode  (pinTrig, OUTPUT);  
  pinMode (pinEcho, INPUT);    
  digitalWrite (pinTrig, LOW); 
  pinMode (Buzzer, OUTPUT);
  Serial.begin (9600); 
}

void loop(){
  int distancia = (calculaDistancia(tempoEcho)*100);
  gatilhoSensor();  
  tempoEcho = pulseIn (pinEcho, HIGH);
  Serial.println (calculaDistancia(tempoEcho)*100);  
  delay (500);
  if(distancia <= 10){
    tone(Buzzer,1500);
  }
  else {
    noTone(Buzzer);
  }
}


void gatilhoSensor() {  
  digitalWrite (pinTrig, HIGH); 
  delayMicroseconds (10); 
  digitalWrite (pinTrig, LOW); 
}

float calculaDistancia (float tempoMicrossegundos) { 
  return((tempoMicrossegundos*velocidadeSom)/20);
}
