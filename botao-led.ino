// By: Eduarda Mota - GitHub @M4DUH
// No seguinte código vamos ver como se liga um led através de um butão. Não é nada com muito babado não, só apertou, ligou, tirou o dedo, desligou.

// Começando do começo, declarando as variáveis.
int ledPin = 4;
int buttonPin = 12;
int estadoButton = 0;  // Declaramos aqui o estado do botão, sendo ele zero, onde qualquer alterção pode se usada.

void setup() {  // Definimos o modo de cada pin, sendo o do botão como entrada, já que recebemos um situação dele.
  pinMode (ledPin, OUTPUT);
  pinMode (buttonPin, INPUT);
}

void loop() {  // Vindo para o loop é onde vemos melhor as novidades (talvez não tão novas assim).
  estadoButton = digitalRead(buttonPin); // Declaramos aqui que o estado do botão é igual ao que a porta digital ler vinda lede, HIGH ou LOW.
  if (estadoButton==HIGH) {  // O "if" é usado para determinarmos uma condição, nesse caso se o boão for acionado, a led vai ser ligada.
    digitalWrite (ledPin, HIGH);
    delay(1000);  // Esse delay vai determinar por quanto tempo a led vai figar ligada após o aperto do botão.
  }
  else {  // Else que sifnifica "então" vai ditar o que acontece após isso.
    digitalWrite (ledPin, LOW); // O led desliga.
  }
}
