//Prateek
//www.justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics/videos

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int FloatSensor = 15;
int buzzer = 12;
int led1 = 27;
int led2 = 14;
int buttonState = 1;

void setup() {
  Serial.begin(9600);
  pinMode(FloatSensor, INPUT_PULLDOWN);
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("  Welcome To");
  lcd.setCursor(0, 1);
  lcd.print("JustDoElectronic");
  delay(3000);
  lcd.clear();
}
void loop() {
  buttonState = digitalRead(FloatSensor);
  if (buttonState == LOW) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(buzzer, HIGH);
    Serial.println("WATER LEVEL - HIGH");
    lcd.setCursor(0, 0);
    lcd.print("  WATER LEVEL");
    lcd.setCursor(0, 1);
    lcd.print("     FULL.");
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(buzzer, LOW);
    Serial.println("WATER LEVEL - LOW");
    lcd.setCursor(0, 0);
    lcd.print("  WATER LEVEL");
    lcd.setCursor(0, 1);
    lcd.print("     EMPTY");
  }
  delay(1000);
}
