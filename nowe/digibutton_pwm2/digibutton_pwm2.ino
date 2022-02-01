const int guzik1 = 2;
const int guzik2 = 3;
const int out = 12;
int liczba = 0;
int lastButtonState = HIGH;
int lastButton2State = HIGH;


void setup() {
  pinMode(guzik1, INPUT_PULLUP);
  pinMode(guzik2, INPUT_PULLUP);
  pinMode(out, OUTPUT);
    Serial.begin(9600);
 
}

void loop() {
  int reading = digitalRead(guzik1);
  int reading2 = digitalRead(guzik2);
  int pwm = map(liczba, 51, 0, 255, 0);
  analogWrite(out, pwm);
  Serial.println(pwm);
if (reading != lastButtonState) {
    delay(400);}
if (digitalRead(guzik1) == LOW) { 
  if (liczba <= 50) {liczba++;} }
if (reading2 != lastButton2State) {
    delay(400);}
if (digitalRead(guzik2) == LOW) {
  if (liczba >= 1) {liczba--;}}
lastButtonState = reading;
lastButton2State = reading2;
}

