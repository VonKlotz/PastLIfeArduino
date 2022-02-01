/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
    for(int huj=1;huj<=13;huj++)
     pinMode(huj,INPUT);
}

// the loop routine runs over and over again forever:
void loop() {

   for(int huj=1;huj<=13;huj++) 
 {
int huj2=digitalRead(huj);
    if(huj>13) {
      huj=1;
    }  else  {
      (huj+1);
    
 }
Serial.println(huj);
Serial.println(huj2);
    delay(1000);        // delay in between reads for stability
}


}
