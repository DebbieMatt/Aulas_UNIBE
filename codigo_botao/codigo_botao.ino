void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);  // pin 12 v režimu výstupu
pinMode(10,INPUT);     // pin 7 v režimu vstupu
}

void loop() {
  // put your main code here, to run repeatedly:
int hodnota = digitalRead(7);  // čteme z pinu 7 a získanou hodnotu přiřadíme do proměnné hodnota
digitalWrite(12, hodnota);     // tuto hodnotu pošleme na pin 12
// druhá možnost: lze to i bez proměnné:
// digitalWrite(12, digitalRead(7));
delay(100);
}
