
#include <Arduino.h>

#define LED_PIN 2

void setup() {
  // A função setup só corre no inicio 
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  //testar a refresh rate mais rapida que é captavel a olho nu
  digitalWrite(LED_PIN, HIGH);
  Serial.println("S");
  delay(50);
  digitalWrite(LED_PIN, LOW);
  Serial.println("LED is off y");
  delay(50);

  
  /*é possivel distinguir a olho nu até ao LED piscar a cada 50ms, o que equivale a 20hz (taxa de quadros de 20fps), o que é ligeiramente inferior á taxa convencional de 24 fps usados no cinema, que permitem uma 
  animação fluida e aparentemente continua  */
}

