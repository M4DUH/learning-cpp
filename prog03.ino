// By: Eduarda Mota - GitHub @M4DUH
// Objetivo: fazer um semáforo simples.

// Damos início declarando as variáveis, neste circuito cada led vai ter que ser ligada a um pino diferente, pois cada um deles vai executar ao separadamente, caso estivessem todos ligados ao mesmo pino daria uma grande confusão.
// Usei como nome da variável a cor de seu respectivo led, dessa forma fica mais fácil de entender e até mesmo de não embaralhar as coisas.
int vermelho = 12;
int amarelo = 9;
int verde = 6;

void setup (){  // Função executada ao iniciarmos o arduino, dentro dela decretamos o modo de cada pin = "pinMode".
  pinMode (vermelho, OUTPUT);  // Usamos o OUTPUT pois queremos uma saída de nergia direcionada aos pinos dos leds.
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
}

void loop (){  // O void loop é a função que vai ficar rodando literalmente em loop, então aqui colocamos aquilo que queremos que seja executado.
  digitalWrite (vermelho, LOW); 
  digitalWrite (amarelo, HIGH); // Agora começamos a configurar o semáforo, a maneira mais intuitiva é iniciar com o Amarelo ligando.
  digitalWrite (verde, LOW); // Vale ressaltar que o "digitalWrite" escrecre o valor ou estado do que queremos, podendo usar o HIGH=alto/ligado ou o LOW=baixo/desligado.
  delay (2000);  // Ao ser chamada, a função delay bloqueia a execução do programa, pelo período de tempo especificado. Usamos aqui 2 segundos.
  
  digitalWrite (vermelho, HIGH);  // Em seguida o vermelho, fechando o sinal.
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  delay (4000);  // O tempo de delay aumentou pois geralmente num semáforo real o tempo de duração do sinal amarelo é mais curto em relação aos demais.
    
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);  // E, por fim, o ver. Sinal aberto.
  delay (4000);  // Damos um delay novamente, e após isso o código irá rodar novamente.
}

// Semáforo prontinho.
