int vermelho = 13;
int amarelo = 11;
int verde = 8;
int vermelhoP = 4;
int verdeP = 2;

void setup (){
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (vermelhoP, OUTPUT);
  pinMode (verdeP, OUTPUT);
}

void loop (){
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);
  digitalWrite (vermelhoP, HIGH);
  digitalWrite (verdeP, LOW);
  delay (10000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, HIGH);
  digitalWrite (verde, LOW);
  digitalWrite (vermelhoP, HIGH);
  digitalWrite (verdeP, LOW);
  delay (5000);
  
  digitalWrite (vermelho, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  digitalWrite (vermelhoP, LOW);
  digitalWrite (verdeP, HIGH);
  delay (10000);
}
