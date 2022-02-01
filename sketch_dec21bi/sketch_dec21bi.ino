const int sensorPin = A0;
const int ledPin = (9,13);
int sensorValue = 0;
int sensorMin = 0;
int sensorMax = 1023;
int pww = 50;
void setup() {
// turn on LED to signal the start of the calibration period:
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
    Serial.begin(9600);


  // calibrate during the first five seconds
  while (millis() < 5000) {
    sensorValue = analogRead(sensorPin);
    if (sensorValue > sensorMax) {
      sensorMax = sensorValue; }
    if (sensorValue < sensorMin) {
      sensorMin = sensorValue; }
      } 
      digitalWrite(13, LOW);
      tone(4, sensorValue);
}

void loop() {

// read the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  // apply the calibration to the sensor reading
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  // in case the sensor value is outside the range seen during calibration
  sensorValue = constrain(sensorValue, 0, 255);

  delay(1);  
  // fade the LED using the calibrated value:
  analogWrite(ledPin, sensorValue);
 tone(4, sensorValue);
delay(40);
noTone(4);
}
