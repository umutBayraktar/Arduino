
#define ECHO 7
#define TRIG 6
long sure,uzaklik;

void setup() {
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ECHO,LOW);
  digitalWrite(TRIG,LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  sure=pulseIn(ECHO,HIGH);
  uzaklik=(sure/29.1/2); // sanırım bu 29.1 sabiti 20 derece Celsius için geçerli.diğer değerler için ayrıca hesaplamak gerekli
  if(uzaklik>200)
  {
    uzaklik=200;
  }
  Serial.println(uzaklik);
  delay(1000);
}
