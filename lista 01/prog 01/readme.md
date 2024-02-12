# "Hello World" no mundo do C++ 
Programar um circuito elétrico responsável por ligar e desligar um led

### 📌 Informações gerais

| Arquivo     | Descrição                       |
| :---:       |                 :---:           |
| [Código](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2001/helloworld.cpp)                    | Programação do circuito             |
| [Circuito](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2001/prog%2001%20-%20circuito.pdf)    | Circuito elétrico em PDF            |
| [Imagem](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2001/prog%2001%20-%20imagem.png)        | Imagem do circuito montado          |
| [Material](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2001/prog%2001%20-%20material.csv)    | Tabela dos componentes utilizados   |


### 📝 Explicando o código

1) Com todos os componentes no lugar, vamos começar a programar.
Primeiramente, declaramos a variável referente a porta do Arduino que vamos utilizar para controlar o led:

``` cpp 
int led = 10; 
```

2) Dentro do *Void Setup* vamos colocar o que queremos que aconteça assim que o arduino for iniciado, que nesse caso é declarar o pino que o led está ligado como saída/output:
``` cpp
void setup () {
  
  pinMode (led, OUTPUT);
}
```
3) E por último, dentro do *Void Loop* colocamos o que deve acontecer com o led, que é *ligar/high* e *desligar/low*. O *Delay* (dado em milissegundos, 1000ms=1s) aqui serve pra delimitar quanto tempo vai ficar ligado antes de apagar e novamente quanto tempo vai ficar desligado antes do loop reiniciar:
``` cpp 
void loop () {
  
  digitalWrite (led, HIGH);
  delay (1000);
  digitalWrite (led, LOW);
  delay (500);
}
```

### 📎 Links auxiliares
Ficou com dúvida? Não tenha medo de pesquisar. Aqui deixarei alguns links que podem ajudar no processo.

[Como calcular um resistor?](https://www.imcresistencias.com.br/post/fisica-e-resistencia-eletrica-4-conceitos-que-voce-precisa-conhecer)\
[Calculadora de resistor](https://br.mouser.com/technical-resources/conversion-calculators/resistor-color-code-calculator)\
[Lei de ohm, Tensão, Corrente, Resistência](https://embarcados.com.br/lei-de-ohm/)\
[O que são variáveis?](https://www.arduino.cc/reference/pt/language/variables/variable-scope-qualifiers/scope/)\
[Documentação de Referência da Linguagem Arduino](https://www.arduino.cc/reference/pt/)
