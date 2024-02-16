# Meu Semáforo 🚦
Montar e programar um circuito com a mesma lógica de um semáforo de trânsito tradicional.

### 📌 Informações gerais

| Arquivo     | Descrição                       |
| :---:       |                 :---:           |
| [Código](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2003/semáforo.cpp)                      | Programação do circuito             |
| [Circuito](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2003/prog%2003%20-%20circuito.pdf)    | Circuito elétrico em PDF            |
| [Imagem](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2003/prog%2003%20-%20imagem.png)        | Imagem do circuito montado          |
| [Material](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2003/prog%2003%20-%20material.csv)    | Tabela dos componentes utilizados   |


### 📝 Explicando o código

1) Declaramos as variáveis para os leds (no exemplo nomeados com suas respectivas cores):
``` cpp 
int vermelho = 12;
int amarelo = 9;
int verde = 6;
```

2) Seguimos como nas tarefas anteriores, configurando os pinos do arduino como *saída/output*:
``` cpp
void setup (){
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
}
```
3) No *loop* configuramos para os leds seguirem a sequência normal de um semáforo, ou seja, aberto (verde), amarelo e por fim, fechado (vermelho). Vamos continuar mexendo com o *high/low* para fazer isso:
``` cpp 
void loop (){
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, HIGH);
  delay (10000);
  
  digitalWrite (vermelho, LOW);
  digitalWrite (amarelo, HIGH);
  digitalWrite (verde, LOW);
  delay (5000);
    
  digitalWrite (vermelho, HIGH);
  digitalWrite (amarelo, LOW);
  digitalWrite (verde, LOW);
  delay (10000);
}
```

### 📎 Links auxiliares
Ficou com dúvida? Não tenha medo de pesquisar. Aqui deixarei alguns links que podem ajudar no processo.

[Como calcular um resistor?](https://www.imcresistencias.com.br/post/fisica-e-resistencia-eletrica-4-conceitos-que-voce-precisa-conhecer)\
[Calculadora de resistor](https://br.mouser.com/technical-resources/conversion-calculators/resistor-color-code-calculator)\
[Lei de ohm, Tensão, Corrente, Resistência](https://embarcados.com.br/lei-de-ohm/)\
[Documentação de Referência da Linguagem Arduino](https://www.arduino.cc/reference/pt/)\
[Ligação em série ou ligação em paralelo?](https://www.mundodaeletrica.com.br/ligacao-em-serie-ou-ligacao-em-paralelo/)\
[Como criar um semáforo com Arduino](https://www.makerhero.com/blog/como-criar-um-semaforo-com-arduino/)
