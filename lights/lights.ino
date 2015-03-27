void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void on(int pin) {
  digitalWrite(pin, HIGH);
  delay(500);
}

void off(int pin) {
  digitalWrite(pin, LOW);
  delay(500);
}

void loop() {
  int pins[] = { 13, 11, 10, 9, 12 };

  for (int i = 0; i < 5; i++) {
    on(pins[i]);
  }
  delay(1000);
  for (int i = 5; i >= 0; i--) {
    off(pins[i]);
  }
  delay(1000);
  
    /*
  on(13);
  on(11);
  on(10);
  on(9);
  on(12);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(12, HIGH);
  
  delay(1000);
  off(12);
  off(9);
  off(10);
  off(11);
  off(13);
  
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(13, LOW);
  
  delay(1000);
  */
}
