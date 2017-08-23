
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
  uzaklik=(sure/29.1/2);
  if(uzaklik>200)
  {
    uzaklik=200;
  }
  Serial.println(uzaklik);
  delay(1000);
}
