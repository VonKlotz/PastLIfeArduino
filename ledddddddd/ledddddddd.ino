const int ledPin =  LED_BUILTIN;// the number of the LED pin


// Variables will change:
int ledState = 0;

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 400;           // interval at which to blink (milliseconds)

void setup() {

 // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(12,INPUT_PULLUP);
}

void loop() {
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();
  if (digitalRead(12) == LOW)
{ digitalWrite(ledPin, HIGH);
}
       else {
        
     if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
       if (ledState == LOW) {
           ledState = HIGH;
    }    else {
           ledState = LOW;
    }
    }
  }
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }

