// Variables will change:
int pwm = 0;
unsigned long previousMillis = 0;       

// constants won't change:
const long interval = 250;           
const int ledPin = 11;  
const int guzik = 5;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(guzik,INPUT_PULLUP);

}

void loop() {
  unsigned long currentMillis = millis();
  if (digitalRead(guzik) == HIGH) { 
    analogWrite(ledPin, 255);
     }
       else {
        if (currentMillis - previousMillis >= interval) {
          previousMillis = currentMillis;
       if (pwm == 0) 
       {
           pwm = 60;
           
           }    else
           {
          pwm = 0;
          }
    }
  analogWrite(ledPin, pwm); // set the LED with the ledState of the variable:
  }
  
  }

