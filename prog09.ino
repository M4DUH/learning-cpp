// Objetivo: Capturar a temperatura.

int tempsensor = A2;
float temperatura = 0;

void setup () {
  Serial.begin(9600);
}

void loop(){
   temperatura = (analogRead(tempsensor) * 0.0048828125 * 100); 
   Serial.print("Temperatura = "); 
   Serial.print(temperatura);
   Serial.println(" C");
   delay(2000); 
 }
