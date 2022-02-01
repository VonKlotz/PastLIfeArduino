//const
const int  incbuttonPin = 2;
const int  decbuttonPin = 3;
const int   outPin = 13;
//variable
int stan = ">0<9";
int licznik = 0;
int buttonaState = 0;         // current state of the button
int lastButtonaState = 0;
int buttonState = 0;         // current state of the button
int lastButtonState = 0;  
int buttonPushCounter = 0;
int Val = min(Val, 0) max(Val, 9);
void setup() {
 pinMode(incbuttonPin, INPUT);
 pinMode(decbuttonPin, INPUT);
 pinMode(outPin, OUTPUT);

}

void loop() {
   // read the pushbutton input pin:
  buttonState = digitalRead(incbuttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
   // read the pushbutton input pin:
  buttonaState = digitalRead(decbuttonPin);

  // compare the buttonState to its previous state
  if (buttonaState != lastButtonaState) {
    // if the state has changed, increment the counter
    if (buttonaState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter -1;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }// put your main code here, to run repeatedly:

 switch (buttonPushCounter) {
    case 1:
      //do something when var equals 1
      break;
    case 2:
      //do something when var equals 2
      break;
    default:
      // if nothing else matches, do the default
      // default is optional
      break;}




 }
