//Prateek
//www.justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics

#define ADC_VREF_mV 3300.0
#define ADC_RESOLUTION 4096.0
#define PIN_LM35 33

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcVal = analogRead(PIN_LM35);
  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);
  float tempC = milliVolt / 10;
  float tempF = tempC * 9 / 5 + 32;

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.print("°C");
  Serial.print("  ~  ");
  Serial.print(tempF);
  Serial.println("°F");

  delay(500);
}
