
#include <Arduino.h>

#define LED_PIN 2

void setup() {
  // A função setup só corre no inicio 
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //SOS

  //S
  digitalWrite(LED_PIN, HIGH);
  Serial.println("S");
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  //O
  digitalWrite(LED_PIN, HIGH);
  Serial.println("O");
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  //S
  digitalWrite(LED_PIN, HIGH);
  Serial.println("S");
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  Serial.println("\n\r");
  delay(2000);

  //SCP

  //S
  digitalWrite(LED_PIN, HIGH);
  Serial.println("S");
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  //C
  digitalWrite(LED_PIN, HIGH);
  Serial.println("C");
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  //P
  digitalWrite(LED_PIN, HIGH);
  Serial.println("P");
  delay(300);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(900);
  digitalWrite(LED_PIN, LOW);
  delay(300);

  digitalWrite(LED_PIN, HIGH);
  delay(300);
  digitalWrite(LED_PIN, LOW);
  Serial.println("\n\r");
  delay(5000);
}
