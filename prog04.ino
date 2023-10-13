// By: Eduarda Mota - Git Hub: @M4DUH
// Objetivo: fazer um semáforo de tráfego funcionando em conjunto com um semáforo de pedestre, 5 leds ao total, todas ligadas a diferentes pinos, já desempenharão funções diferentes entre si.


// Começamos da forma tradicional, adicionando as variáveis. Para uma melhor compreensão, cada led está identificada por sua respectiva cor, no semáforo de pedestres tendo o adicional da letra "P".
int vermelho = 13; 
int amarelo = 11;
int verde = 8;
int vermelhoP = 4;
int verdeP = 2;

void setup () {  // No void setup() identificamos o modo dos pinos usados como "OUTPUT", ou seja, saída.
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (vermelhoP, OUTPUT);
  pinMode (verdeP, OUTPUT);
}

void loop () {  // Existem formas mais compactas de fazer isso, evitando toda essa repetição, mas ao meu ver esse é o modo mais didático e que melhor nos faz entender a lógica utilizada. // Partindo desse princípio, a lógica é a mesma do semáforo covencional, agora com o acréscimo do de pedestres.
  digitalWrite (vermelho, LOW);  
  digitalWrite (amarelo, HIGH);  // Lembrando que ao chamar a funçãõ digitalWrite() é como se pedissemos para porta digital escrever um valor para determinada coisa, esse valor podendo ser HIGH=alto/ligado ou LOW=baixo/desligado.
  digitalWrite (verde, LOW);
  digitalWrite (vermelhoP, HIGH);  // Logo, se o sinal amarelo está ligado, o sinal para pedestres deve estar fechado, então ligamos o sinal vermelho para os pedestres.
  digitalWrite (verdeP, LOW);  
  delay (2000);  // Congelamos o código por 2 segundos.
  
  digitalWrite (vermelho, HIGH);  // Após o amarelo desligar, o vermelho liga, fechando o sinal para os automóveis.
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  digitalWrite (vermelhoP, LOW);
  digitalWrite (verdeP, HIGH);  // Abrimos o sinal de pedestres.
  delay (4000);  // Código congelado por 4 segundos.
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);  // Por último, sinal verde para os carros.
  digitalWrite (vermelhoP, HIGH);  // Sinal vermelho para os pedestres.
  digitalWrite (verdeP, LOW);
  delay (4000);  // Congela por 4 segundos de novo.
}
  
  // Dessa forma você tem um semáforo funcional usando o arduino. Caso você já tenha idade e uma carteira de motorista, lembre-se de dirigir com segurança!
  
