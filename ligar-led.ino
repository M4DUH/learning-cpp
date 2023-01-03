// By: Eduarda Mota - GitHub: @M4DUH
// O objetivo desse circuito é acender um único led.

int Led = 11;         //Declara-se a variável referente ao pino do led, aqui está sendo usado o pino 11.

void setup() {             //Essa é a função inicial do nosso código, será executada uma única vez assim que o arduino for ligado.
  pinMode (Led, OUTPUT);  //Dando o estado dos pinos = pinMode, neste caso vamos usar o "output" pois a energia está saindo do pino do arduino e indo para o led.
}

void loop() {                    //O void loop é a função que vai ficar rodando literalmente em loop, então aqui colocamos aquilo que queremos que seja executado.
  digitalWrite (led, HIGH);     //Desse modo falamos para o arduino que queremos o led LIGADO = HIGH, e a mágica (nada mágica) ocorre.
}
