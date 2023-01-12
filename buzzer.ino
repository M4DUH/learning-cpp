// By: Eduarda Mota - GitHub: @M4DUH
// O presente còdigo faz parte do meu primeiro contato com o módulo buzzer, onde tentei recriar a melódia de "dó ré mi fá fá fá dó ré dó ré dó sol fá mi mi dó ré mi fá" da galinha mais famosa do Brasil, a pintadinha.
// A frequência sonora das notas são: "dó" 264Hz - "ré" 297Hz - "mi" 330Hz - "fá" 352Hz - "sol" 396Hz - "lá" 440Hz - "si" 495Hz.


int tempo = 1000;  // Adicionamos a variável do tempo que vai ser usado pra delimmitar a duração de cada nota.

void setup(){
  pinMode (10, OUTPUT); // Definimos o pino que ele está ligado como saída.
}

void loop(){
  delay (1000);  // Esperar 1seg.
  tone (10, 262, tempo);  // Usei a função tone para dar vida ao buzzer, nela vamos precisar do pino onde o buzzer está ligado, a frquência da nota que queremos reproduzir e o seu tempo de duração.
  delay (tempo); // O processo se repete nas demais notas,
  tone (10, 294, tempo);
  delay (tempo);
  tone (10, 330, tempo);
  delay (tempo);
  tone (10, 349, tempo);
  delay (tempo);
  tone (10, 349, tempo);
  delay (tempo);
  tone (10, 349, tempo);
  delay (tempo);
  tone (10, 262, tempo);
  delay (tempo);
  tone (10, 294, tempo);
  delay (tempo);
  tone (10, 262, tempo);
  delay (tempo);
  tone (10, 294, tempo);
  delay (tempo);
  tone (10, 262, tempo);
  delay (tempo);
  tone (10, 392, tempo);
  delay (tempo);
  tone (10, 349, tempo);
  delay (tempo);
  tone (10, 330, tempo);
  delay (tempo);
  tone (10, 330, tempo);
  delay (tempo);
  tone (10, 262, tempo);
  delay (tempo);
  tone (10, 294, tempo);
  delay (tempo);
  tone (10, 330, tempo);
  delay (tempo);
  tone (10, 349, tempo); 
  delay (tempo);
}

// Pessoalmente achei o buzzer bem legal.
