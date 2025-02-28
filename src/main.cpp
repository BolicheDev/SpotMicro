#include <Arduino.h>

#define LED 2  // Pin del LED interno del ESP32

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("¡Perrito ha despertado!");
}

void loop() {
  digitalWrite(LED, HIGH);  // LED encendido
  Serial.println("Perrito esta mirando...");
  delay(1000);
  digitalWrite(LED, LOW);   // LED apagado
  Serial.println("Perrito ha cerrado los ojos...");
  delay(1000);
}