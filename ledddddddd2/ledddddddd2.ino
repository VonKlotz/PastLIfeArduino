const int ledPin =  LED_BUILTIN;// the number of the LED pin
const int button = 12;
int stan = 0;
void setup() {

 // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop() {
 stan = digitalRead(button);

  if (stan == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    
  } else {
    // turn LED off:
   
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
    
  }
}

