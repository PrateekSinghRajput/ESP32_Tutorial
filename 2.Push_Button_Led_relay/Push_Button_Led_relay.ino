//Prateek
//www.prateks.in
//https://www.youtube.com/c/JustDoElectronics

#define BUTTON_PIN 33
#define LED_PIN 14
#define RELAY_PIN 26

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    Serial.println("The button is being pressed");
    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  } else if (buttonState == HIGH) {
    Serial.println("The button is unpressed");
    digitalWrite(RELAY_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  }
}
