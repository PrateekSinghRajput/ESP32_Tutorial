//Prateek
//www.justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics

#define LIGHT_SENSOR_PIN 33

void setup() {

  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(LIGHT_SENSOR_PIN);

  Serial.print("Analog Value = ");
  Serial.print(analogValue);


  if (analogValue < 40) {
    Serial.println(" => Dark");
  } else if (analogValue < 2000) {
    Serial.println(" => Dim");
  } else if (analogValue < 2500) {
    Serial.println(" => Light");
  } else if (analogValue < 4000) {
    Serial.println(" => Bright");
  } else {
    Serial.println(" => Very bright");
  }

  delay(500);
}
