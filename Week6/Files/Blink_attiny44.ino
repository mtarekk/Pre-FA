#define SW 7
#define LED 8
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(SW) == LOW) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
      delay(1000);
    }
  } 
  else
  {
    digitalWrite(LED, LOW);
  }
}
