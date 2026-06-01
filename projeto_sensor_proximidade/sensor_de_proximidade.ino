

const int trigPin = 9;   
const int echoPin = 10;

const int ledVerde1    = 7;
const int ledVerde2    = 6;
const int ledAmarillo1 = 5;
const int ledAmarillo2 = 4;
const int ledRojo1     = 3;
const int ledRojo2     = 2;

//  guardar la medicin
long duracion;
int distancia; // int para cm

void setup() {
    

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarillo1, OUTPUT);
  pinMode(ledAmarillo2, OUTPUT);
  pinMode(ledRojo1, OUTPUT);
  pinMode(ledRojo2, OUTPUT);
}

void loop() {
  
  // 5. MEDIR LA DISTANCIA 
  
  // ñimpiamos el pin Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // enviamos el pulso ultrasónico
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // tiempo que tardó el eco en volver
  duracion = pulseIn(echoPin, HIGH);

  // calculamos la distancia en cm
  distancia = duracion * 0.034 / 2;

  // Imprimie la distancia en el serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Rangos:
  // cerca :  Menos de 15 cm
  // Media:   Entre 15 y 40 cm
  // Lejos:    Más de 40 cm
  
  if (distancia < 15 && distancia > 0) {
    // CERCA
   // prende todo los leds
    digitalWrite(ledVerde1, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarillo1, HIGH);
    digitalWrite(ledAmarillo2, HIGH);
    digitalWrite(ledRojo1, HIGH);
    digitalWrite(ledRojo2, HIGH);
    
  } else if (distancia < 40) {
    // media
    // prende aerdes y amarillos
    digitalWrite(ledVerde1, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarillo1, HIGH);
    digitalWrite(ledAmarillo2, HIGH);
    digitalWrite(ledRojo1, LOW); // Apagado
    digitalWrite(ledRojo2, LOW); // Apagado
    
  } else {
    // Lejos
    // prende verde nomas
   
    digitalWrite(ledVerde1, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarillo1, LOW); 
    digitalWrite(ledAmarillo2, LOW); 
    digitalWrite(ledRojo1, LOW); 
    digitalWrite(ledRojo2, LOW); 
  }
  
  // pausa para la otra medicion
  delay(100);
}