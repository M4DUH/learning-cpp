// By: Maria Eduarda - GitHub: @M4DUH
// Seguindo a lógica do circuito anterior vamos para a próxima tarefa, ligar mais de um led ao mesmo tempo, nesse caso, utilizando um único pino do nosso querido arduino.

int LedRed = 13; // Declaramos a variável, colocando seu tipo, o nome que desejamos e o respectivo pino.
int LedBlue = 12;
int LedGreen = 11;

void setup () {  // Chamamos a função "setup", sendo ela a que roda assim que o arduino é ligado.
  pinMode (LedRed, OUTPUT); // Dentro do vois setup colocamos aquilo que se deseja ser executado de primeira, no nosso presente caso, queremos que saia energia através do pino escolhido para alimentar os nossos leds.
  pinMode (LedBlue, OUTPUT);
  pinMode (LedGreen, OUTPUT);
}

void loop () {  // O void loop vai ser a função que vai deixar rodando o nosso código.
  digitalWrite (LedRed, HIGH);  // Queremos que a porta digital, que antes configuramos como saída deixe os leds ligados = Led, HIGH.
  delay (1500);  // Tempo dado em ms.
  digitalWrite (LedBlue, HIGH);
  delay (1500);
  digitalWrite (LedGreen, HIGH);
  delay (1500);
}  

// Fechou chave e vualá, leds ligando! Para ligá-los de forma simultânea é só retirar o delay.
