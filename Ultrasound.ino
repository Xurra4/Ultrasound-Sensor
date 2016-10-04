/*This program calculate the distance between sensor HC-SR04 and obstacle and send via SerialUSB*/


#include "Config.h"

void setup()
{
  ini_Serial();
  ini_ultrasound();
}

void loop()
{
  digitalWrite(TRIG,LOW); /* To stabilization sensor*/
  delayMicroseconds(5);
  digitalWrite(TRIG, HIGH); /* send ultrasonic pulse*/
  delayMicroseconds(10);
  time_pulse=pulseIn(ECHO, HIGH); /* Function to mesure how long is the in pulse. Since HIGH until LOW fot in pulse*/
  distance= int(0.017*time_pulse); /*Equation to calculate the distance like intteger*/
  
  /*Print console*/
  Serial.println("Distancia");
  Serial.println(distance);
  Serial.println(" cm");
  delay(1000);
}
