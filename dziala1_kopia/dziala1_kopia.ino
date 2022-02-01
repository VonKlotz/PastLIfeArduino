const int guzik1 = 2;
const int guzik2 = 3;
int liczba = 0;
int lastButtonState = HIGH;
int lastButton2State = HIGH;


void setup() {
  pinMode(guzik1, INPUT_PULLUP);
  pinMode(guzik2, INPUT_PULLUP);
    Serial.begin(9600);

}

void loop() {
  int reading = digitalRead(guzik1);
  int reading2 = digitalRead(guzik2);
  Serial.println(liczba);
if (reading != lastButtonState) {
    delay(400);}
    if (digitalRead(guzik1) == LOW) {liczba++;}
if (reading2 != lastButton2State) {
    delay(400);}
    if (digitalRead(guzik2) == LOW) {liczba--;}
lastButtonState = reading;
lastButton2State = reading2;
}

