/*****************************************************************
Uygulama Adı:Arduino ile Trafik Lampası Yapımı
Kırmızı led 6
Sarı led    7
Yeşil led   8 numaralı pinlere bağlı
*/
#define KIRMIZI 10
#define SARI    9
#define YESIL   8
void IsikYak(int yananIsik,int sonuk1,int sonuk2,int milisaniye)
{
  digitalWrite(yananIsik,HIGH);
  digitalWrite(sonuk1,LOW);
  digitalWrite(sonuk2,LOW);
  delay(milisaniye);
  }
void setup() {
  pinMode(KIRMIZI,HIGH);
  pinMode(SARI,HIGH);
  pinMode(YESIL,HIGH);
}
void loop() {
  IsikYak(KIRMIZI,SARI,YESIL,3000);
  IsikYak(SARI,KIRMIZI,YESIL,1500);
  IsikYak(YESIL,KIRMIZI,SARI,3000);
  IsikYak(SARI,KIRMIZI,YESIL,1500);
}
