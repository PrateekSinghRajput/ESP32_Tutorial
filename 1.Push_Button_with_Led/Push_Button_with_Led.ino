//Prateek
//www.justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics

#define BUTTON_PIN 33  
#define LED_PIN    14  

int button_state = 0;  

void setup() {

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {

  button_state = digitalRead(BUTTON_PIN);
  if (button_state == LOW)      
    digitalWrite(LED_PIN, HIGH); 
  else                          
    digitalWrite(LED_PIN, LOW); 
}
