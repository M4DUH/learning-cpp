// By: Maria Eduarda - GitHub: @M4DUH
// Seguindo a lógica do circuito anterior vamos para a próxima tarefa, ligar mais de um led ao mesmo tempo, nesse caso, utilizando um único pino do nosso querido arduino.
// A maior mudança deste circuito para aquele onde ligamos um led é na prática, no código é basicamente a mesma coisa.


int Led = 12;  // Declaramos a variável, colocando seu tipo, o nome que desejamos e o respectivo pino.

void setup () {  // Chamamos a função "setup", sendo ela a que roda assim que o arduino é ligado.
  pinMode (Led, OUTPUT);  // Dentro do vois setup colocamos aquilo que se deseja ser executado de primeira, no nosso presente caso, queremos que saia energia através do pino escolhido para alimentar os nossos leds.
}

void loop () {  // O void loop vai ser a função que vai deixar rodando o nosso código.
  digitalWrite (Led, HIGH);  // Queremos que a porta digital, que antes configuramos como saída deixe os leds ligados = Led, HIGH.
}  

// Fechou chave e vualá, leds ligando!
