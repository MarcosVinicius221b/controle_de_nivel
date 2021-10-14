#define PIN_LED 2
#define PIN_SENSOR 8

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_SENSOR, INPUT_PULLUP);

}

void loop() {
  int state = digitalRead(PIN_SENSOR);

  switch(state) {
    case 0:
      digitalWrite(PIN_LED, LOW);
      break;
    case 1:
      digitalWrite(PIN_LED, HIGH);
      break;
  }

}
