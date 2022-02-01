// Variables will change:
int pwm = 125;
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 300;           // interval at which to blink (milliseconds)
const int ledPin =  12;// the number of the LED pin
const int guzik =  5;
void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(guzik,INPUT_PULLUP);
}

void loop() {
 
  unsigned long currentMillis = millis();
  if (digitalRead(guzik) == HIGH)
  {

    pwm = 250;
    analogWrite(ledPin, pwm);
   
}
       else {
        pwm = 0;
     if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
       if (pwm == 125) {
           pwm = 0;
    }    else {
           pwm = 125;
    }
    }
  }
    // set the LED with the ledState of the variable:
    analogWrite(ledPin, pwm);
  }

