// Written by Arild Jensen
// github.com/arildjensen/arduino

const int ditPin = 2;
const int pwrPin = 3;
const int ditLength = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(ditPin, INPUT);
  pinMode(pwrPin, OUTPUT);
  digitalWrite(pwrPin, HIGH);
  Serial.begin(9600);
  Serial.println("Morse Practice by Arild Jensen");
  Serial.println("------------------------------");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(ditPin) == LOW) {
    Serial.println("DIT");
    delay(ditLength);
  }
}
