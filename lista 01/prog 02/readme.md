# Sequência de leds 
Montar e programar um circuito com vários leds na sequência que desejar

### 📌 Informações gerais

| Arquivo     | Descrição                       |
| :---:       |                 :---:           |
| [Código](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2002/sequencia.cpp)                     | Programação do circuito             |
| [Circuito](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2002/prog%2002%20-%20circuito.pdf)    | Circuito elétrico em PDF            |
| [Imagem](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2002/prog%2002%20-%20imagem.png)        | Imagem do circuito montado          |
| [Material](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2002/prog%2002%20-%20materiais.csv)   | Tabela dos componentes utilizados   |


### 📝 Explicando o código

1) Declaramos as variáveis para os leds, no circuito utilizei 3:

``` cpp 
int led1 = 11;
int led2 = 12;
int led3 = 13;
```

2) Dentro do *Void Setup* colocamos o pino do arduino como *saída/output*:
``` cpp
void setup(){
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
```
3) Aqui é o lugar pra deixar a criatividade rolar solta, a sequência de leds é totalmente da sua escolha, assim como a quantidade e cor dos leds (fazendo as devidas modificações no circuito).\
   Como exemplo estou usando uma sequência com 3 leds, onde todos irão ligar, desligar, ligar apenas o do meio, ligar as duas extremidades e... (etc)\
   Para fazer isso - nesse exemplo - usaremos apenas as funções *HIGH/LOW*, como no trecho abaixo:
``` cpp 
void loop () {
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
}
```

### 📎 Links auxiliares
Ficou com dúvida? Não tenha medo de pesquisar. Aqui deixarei alguns links que podem ajudar no processo.

[Como calcular um resistor?](https://www.imcresistencias.com.br/post/fisica-e-resistencia-eletrica-4-conceitos-que-voce-precisa-conhecer)\
[Calculadora de resistor](https://br.mouser.com/technical-resources/conversion-calculators/resistor-color-code-calculator)\
[Lei de ohm, Tensão, Corrente, Resistência](https://embarcados.com.br/lei-de-ohm/)\
[Documentação de Referência da Linguagem Arduino](https://www.arduino.cc/reference/pt/)\
[Ligação em série ou ligação em paralelo?](https://www.mundodaeletrica.com.br/ligacao-em-serie-ou-ligacao-em-paralelo/)
