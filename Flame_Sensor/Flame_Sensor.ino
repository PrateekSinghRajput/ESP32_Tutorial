#define SENSOR_PIN 14
#define Led 13
#define Buzzer 12

void setup() {

  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {

  int flame_state = digitalRead(SENSOR_PIN);

  if (flame_state == HIGH) {
    Serial.println("The Fire Is Detected");
    digitalWrite(Led, HIGH);
    digitalWrite(Buzzer, LOW);
  } else {
    Serial.println("The Fire Is Not Detected");
    digitalWrite(Led, LOW);
    digitalWrite(Buzzer, HIGH);
  }
  delay(100);
}
