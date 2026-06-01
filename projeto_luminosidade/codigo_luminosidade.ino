int ledPrincipal = 13;
int ledAlerta = 12;
int sensorLuz = A0;
int botao = 2;

void setup() {
  pinMode(ledPrincipal, OUTPUT);
  pinMode(ledAlerta, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(sensorLuz);
  int estadoBotao = digitalRead(botao);

  Serial.println(valorLuz);

  // BOTÃO DE EMERGÊNCIA
  if (estadoBotao == LOW) {
    digitalWrite(ledPrincipal, LOW);
    digitalWrite(ledAlerta, LOW);
    return;
  }

  // LED PRINCIPAL (iluminação)
  if (valorLuz < 500) {
    digitalWrite(ledPrincipal, HIGH);
  } else {
    digitalWrite(ledPrincipal, LOW);
  }

  // LED DE ALERTA (condição crítica)
  if (valorLuz < 200 || valorLuz > 900) {
    digitalWrite(ledAlerta, HIGH);
  } else {
    digitalWrite(ledAlerta, LOW);
  }

  delay(200);
}