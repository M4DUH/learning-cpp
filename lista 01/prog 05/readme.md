# Ligando led com botão
Montar e programar um circuito que ao acionar um botão um led se acenderá.

### 📌 Informações gerais

| Arquivo     | Descrição                       |
| :---:       |                 :---:           |
| [Código](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2005/button.cpp)                      | Programação do circuito             |
| [Circuito](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2005/prog%2005%20-%20circuito.pdf)  | Circuito elétrico em PDF            |
| [Imagem](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2005/prog%2005%20-%20imagem.png)      | Imagem do circuito montado          |
| [Material](https://github.com/M4DUH/learning-cpp/blob/main/lista%2001/prog%2005/prog%2005%20-%20material.csv)  | Tabela dos componentes utilizados   |


### 📝 Explicando o código

1) Declaramos as variáveis do led e do botão, o diferencial nesse caso é que também será adicionado um a variável para o estado do botão, que de início será "0":
``` cpp 
int ledPin = 4;
int buttonPin = 12;
int estadoButton = 0;
```

2) Seguimos como nas tarefas anteriores, configurando os pinos do arduino como *saída/output*:

3) No *loop* em vez de usarmos o "DigitalWrite" como nas demonstrações anteriores, nesse caso vamos usar o "DigitalRead" porque queremos que ele literalmente leia o estado no botão para podermos aplicar nossa lógica. Aqui se(if) a leitura resultar que o estado do botão é *HIGH* - ele foi acionado - o led vai ligar e permanecer acesso por 2 segundos, se não(else) o led permanecerá desligado.
``` cpp 
void loop() {
  estadoButton = digitalRead(buttonPin);
  if (estadoButton==HIGH){
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
```

### 📎 Links auxiliares
Ficou com dúvida? Não tenha medo de pesquisar. Aqui deixarei alguns links que podem ajudar no processo.

[Calculadora de resistor](https://br.mouser.com/technical-resources/conversion-calculators/resistor-color-code-calculator)\
[Lei de ohm, Tensão, Corrente, Resistência](https://embarcados.com.br/lei-de-ohm/)\
[Documentação de Referência da Linguagem Arduino](https://www.arduino.cc/reference/pt/)\
[Como usar o push button com Arduino](https://www.squids.com.br/arduino/index.php/software/dicas/168-como-usar-push-button-com-arduino-programacao)

