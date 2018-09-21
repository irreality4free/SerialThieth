#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
mySerial.begin(9600);
delay(1000);
Serial.println("READY TO RECEAVE");
}

void loop() {
  // put your main code here, to run repeatedly:
if(mySerial.available()>0){
  char a = mySerial.read();
  Serial.print(a);

}
}
