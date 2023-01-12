// By: Eduarda Mota - GitHub: @M4DUH
// Uma forma mais simples de fazer o código do buzzer, declarando a frequencia das notas como uma variável e evitando o trabalho de decorar cada nota ou ficar toda hora procurando.

int doh = 264;  // "Do" não tava sendo reconhecido como nome da variável e sim como uma parte dela, por esse motivo o uso do "doh".
int re = 297;
int mi = 330;
int fa = 352;
int sol = 396;
int la = 440;
int si = 495;


void setup () {
  pinMode (10, OUTPUT);
}

void loop () {
  delay (1000);
  tone (10, doh, 1000);
  delay (1000);
  tone (10, re, 1000);
  delay (1000);
  tone (10, mi, 1000);
  delay (1000);
  tone (10, fa, 500);
  delay (1000);
  tone (10, fa, 500);
  delay (1000);
  tone (10, fa, 500);
  delay (1000);
  tone (10, doh, 1000);
  delay (1000);
  tone (10, re, 1000);
  delay (1000);
  tone (10, doh, 1000);
  delay (1000);
  tone (10, re, 1000);
  delay (1000);
  tone (10, doh, 1000);
  delay (1000);
  tone (10, sol, 1000);
  delay (1000);
  tone (10, fa, 1000);
  delay (1000);
  tone (10, mi, 1000);
  delay (1000);
  tone (10, mi, 1000);
  delay (1000);
  tone (10, doh, 1000);
  delay (1000);
  tone (10, re, 1000);
  delay (1000);
  tone (10, mi, 1000);
  delay (1000);
  tone (10, fa, 500);
  delay (1000);
}
