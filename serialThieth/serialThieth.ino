#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 8); // RX, TX
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0){
  char a = Serial.read();
  mySerial.print(a);
}
}
