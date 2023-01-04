// By: Eduarda Mota - GitHub @M4DUH
// Dando mais um grande passo, vamos fazer o código de um sensor ultrassônico.

// Declaramos as variáveis e as constantes.
int pinTrig = 12;
int pinEcho = 11;
float tempoEcho = 0;
const float velocidadeSom = 0.00034029; // usamos o const aqui pois este valor não vai se alterar ao longo do código, vai sempre permanecer o mesmo.

void setup() {
  pinMode  (pinTrig, OUTPUT);  // Determinamos o pinTrig como saída já que ele é o responsável por enviar o sinal sonoro.
  pinMode (pinEcho, INPUT);    // Enquanto o pinEcho fica como entrada, já que ele capta as ondas sonoras.
  digitalWrite (pinTrig, LOW);  // Iniciamos com o pinTrig deligado.
  Serial.begin (9600);  // Abrimos a porta serial.
}

void loop(){
  gatilhoSensor();   // Chamamos a funçao gatilho sensor.
  tempoEcho = pulseIn (pinEcho, HIGH);  // Dessa forma dizemos que o tempo de duração do Echo (receptação) é igual a duração do pulso que for capturado em resposta ao enviado pelo Trig.
  Serial.println (calculaDistancia(tempoEcho)*100);  // Aqui o Serial.print.ln vai pegar o valor recebido pelo pinEcho usar o calculaDistancia pro saber a distâncio o objeto que foi notado está.
  delay (500); // Tempo que vai levar entre as repetições.
}

void gatilhoSensor() {  // Essa função vai ativar e desativar o pinTrig, pra fazer a medição do pulso.
  digitalWrite (pinTrig, HIGH); // Liga.
  delayMicroseconds (10);  // Tempo que ele passa ligado.
  digitalWrite (pinTrig, LOW); // Desliga.
}

float calculaDistancia (float tempoMicrossegundos) {  // Usado pra fazer as conta lá de cima.
  return((tempoMicrossegundos*velocidadeSom)/20);
}
