#include <SoftwareSerial.h>
#define RX 10
#define TX 11
#define PIN_SARI 5
#define PIN_KIRMIZI 6
#define PIN_YESIL 7

void LedYak(int pinNo)
{
  digitalWrite(pinNo,HIGH);
}
void LedSondur(int pinNo)
{
  digitalWrite(pinNo,LOW);
}
SoftwareSerial BlueTooth(RX,TX);

void setup() {
  BlueTooth.begin(9600);
  pinMode(PIN_SARI,OUTPUT);
  pinMode(PIN_KIRMIZI,OUTPUT);
  pinMode(PIN_YESIL,OUTPUT);
}
char secim;
void loop() {
  while(BlueTooth.available()>0)
  {
    secim=BlueTooth.read();
    switch(secim)
    {
      case 'A':  
      case 'a':
        LedYak(PIN_SARI);
      break;
      case 'B':  
      case 'b':
        LedYak(PIN_KIRMIZI);
      break;
      case 'c':  
      case 'C':
        LedYak(PIN_YESIL);
      break;
      case 'D':  
      case 'd':
        LedSondur(PIN_SARI);
      break;
      case 'E':  
      case 'e':
        LedSondur(PIN_KIRMIZI);  
      break;
      case 'F':  
      case 'f':
        LedSondur(PIN_YESIL);
      break;     
    }   
  }
}
