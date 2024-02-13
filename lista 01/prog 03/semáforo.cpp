int vermelho = 12;
int amarelo = 9;
int verde = 6;

void setup (){
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
}

void loop (){
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);
  delay (10000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, HIGH);
  digitalWrite (verde, LOW);
  delay (5000);
    
  digitalWrite (vermelho, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  delay (10000);
}

