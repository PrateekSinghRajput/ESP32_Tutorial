//Prateek
//www.justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics

#include <ESP32Servo.h>
#include <ezButton.h>
#define BUTTON_PIN 33
#define SERVO_PIN 26
ezButton button(BUTTON_PIN);
Servo servo;
int angle = 0;

void setup() {
  Serial.begin(9600);
  button.setDebounceTime(50);
  servo.attach(SERVO_PIN);

  servo.write(angle);
}

void loop() {
  button.loop();

  if (button.isPressed()) {
    if (angle == 0)
      angle = 90;
    else if (angle == 90)
      angle = 0;
    Serial.print("The button is pressed => rotate servo to ");
    Serial.print(angle);
    Serial.println("°");
    servo.write(angle);
  }
}
