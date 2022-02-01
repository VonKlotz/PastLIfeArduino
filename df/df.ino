const int guzik1 = 2;
const int guzik2 = 3;
int liczba = 0;
void setup() {
  pinMode(guzik1, INPUT_PULLUP);
  pinMode(guzik2, INPUT_PULLUP);
    Serial.begin(9600);

}

void loop() {
  Serial.println(liczba);
if (digitalRead(guzik1) == LOW) { 
  liczba++;
  delay(50); 
}
if (digitalRead(guzik2) == LOW) {
  liczba--;
  delay(50);
}
delay(50);

}
