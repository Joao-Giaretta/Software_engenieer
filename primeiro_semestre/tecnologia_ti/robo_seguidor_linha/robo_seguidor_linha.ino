#include <Servo.h>

#define roda_e 5
#define roda_d 6
#define sensor1 A5
#define sensor2 A4
#define frente 180
#define tras 0
#define parar 90
#define preto 500   
#define slowfrente 85
#define slowtras 45


Servo servo_e;
Servo servo_d;

void setup() {
  // Define a roda:
  servo_e.attach(roda_e);
  servo_d.attach(roda_d);
  Serial.begin(9600);
}

void loop() {
  // Define os valores do range do branco e do preto:
   int sensor_e = analogRead(sensor1);
   int sensor_d = analogRead(sensor2);

   Serial.print("sensor 1  ");
   Serial.println(sensor_e);
   Serial.print("sensor 2  ");
   Serial.println(sensor_d);
   
   if ((sensor_e <= preto) && (sensor_d <= preto)){
    servo_e.write(tras);
    servo_d.write(frente);}
   else if ((sensor_e <= preto) && (sensor_d > preto)){
    servo_e.write(tras);
    servo_d.write(parar);
   }
   else if ((sensor_e > preto) && (sensor_d <= preto)){
    servo_e.write(parar);
    servo_d.write(frente);
   } 
   else {
    servo_e.write(tras);
    servo_d.write(frente);
   }
}
