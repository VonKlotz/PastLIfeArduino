void setup() {
pinMode(0,INPUT_PULLUP);}
void loop() {
   if (digitalRead(0) ==LOW)
    {tone(8, 350);
    delay(60);
    noTone(8);
    delay(1);}
    else noTone(8);
    delay(30);}

