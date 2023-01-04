// By: Eduarda Mota - GitHub @M4DUH
// Semáforo ativado com botão.

// Declaração das variáveis.
int vermelho = 7;
int amarelo = 6;
int verde = 5;
int botao = 12;

void setup() {  // Determinamos o modo do pino de cada um e colocamos a forma que queremos que o semafóro inicie, desse caso, aberto.
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (botao, INPUT);
  digitalWrite (verde, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (vermelho, LOW);
}

void loop () {
  if (digitalRead(botao) == HIGH) {  // Botamos a condição para caso o botão seja ativado, espere o delay de 1 segundo e chame a função "semaforo()".
    delay (1000);
    semaforo();
  }
}

void semaforo () {  // Chamamosa função do semáforo com aquilo que queremos que ele faça após apertarmos o botão, ou seja, fechar.
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  delay(2000);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(4000);
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
  delay(4000);
  // Segue o mesmo esquema do semáforo normal, mas dessa vez com a condição do botão.
}
