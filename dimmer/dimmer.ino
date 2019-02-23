void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void dimmer(int freq, int duty) {     //dimmer functions with constant frequency and variable duty cycle
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty /100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}

void loop() {
  for(int i = 10; i <= 100; i+=10) {   //brightening
    dimmer(50, i);
  }
  for(int i = 100; i >= 10; i-=10) {   //dimming
    dimmer(50, i);
  }
}
