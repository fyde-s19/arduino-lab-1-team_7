void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int interval) {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(interval*1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                      //wait for a second
}

void loop() {
  timedBlink(1);
  timedBlink(2);
  timedBlink(3);
}
