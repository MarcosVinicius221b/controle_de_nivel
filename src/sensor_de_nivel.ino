/*
 * Este software tem finalidade didática.
 * 
 * Autor: Marcos Vinicius
 * Data: 10/14/21
*/

// Pino do buzzer
#define PIN_BUZZER 2
// Pino do sensor
#define PIN_SENSOR 8

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_SENSOR, INPUT_PULLUP);
}

void loop() {
  // Recebe o estado do sensor
  bool state = digitalRead(PIN_SENSOR);

  // Verifica se é true ou false
  if(state) {
    tone(PIN_BUZZER, 1000);
  }
  else {
    noTone(PIN_BUZZER);
  }
}