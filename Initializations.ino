void ini_Serial()
{
  Serial.begin(BAUDRATE);   // Serial Port Comunications at 9600 Baud rate
}

void ini_ultrasound()
{
  pinMode(TRIG, OUTPUT); /*enable pin out to ultrasonic pulse*/
  pinMode(ECHO, INPUT); /*enable pin in to calculate time between send a recieve ultrasound*/
}

