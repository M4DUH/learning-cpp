


#include <Servo.h>

#define SERVO_base 8 //definindo as portas
#define SERVO_ombro 9
#define SERVO_cotovelo 10
#define SERVO_punho 11

Servo base; //nomeando os servos
Servo ombro;
Servo cotovelo;
Servo punho;
int pos; //declarando a variável da posição

void setup () {
  
  base.attach (SERVO_base);
  ombro.attach (SERVO_ombro);
  cotovelo.attach (SERVO_cotovelo);
  punho.attach (SERVO_punho);
  Serial.begin (9600);
  base.write (0);
  ombro.write (0);
  cotovelo.write (0);
  punho.write (0);
}

void loop () {
  
  base.write (180);
  ombro.write (45);
  cotovelo.write (90);
  punho.write (180);
  delay (500);
  punho.write (90);
  delay (500);
  punho.write (0);
  cotovelo.write (0);
  ombro.write (0);
  base.write (360);
  delay (500);
  base.write (-360);
  delay (1000); //fazendo a movimentação e voltando ao ponto zero
}
