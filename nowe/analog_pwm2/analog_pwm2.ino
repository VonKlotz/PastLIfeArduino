const int anain = A0;
const int pwmout = 12;
const int cled = 13;

int sensorValue = 0;         // the sensor value
int sensorMin = 1023;        // minimum sensor value
int sensorMax = 0;  
void setup() {
  
  pinMode(pwmout, OUTPUT);
  pinMode(13, OUTPUT);
   digitalWrite(cled, HIGH);

  // calibrate during the first five seconds
  while (millis() < 5000) {
    sensorValue = analogRead(anain);

    // record the maximum sensor value
    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }

    // record the minimum sensor value
    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    }
  }

  // signal the end of the calibration period
  digitalWrite(cled, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
// read the sensor:
  sensorValue = analogRead(anain);

  // apply the calibration to the sensor reading
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  // in case the sensor value is outside the range seen during calibration
  sensorValue = constrain(sensorValue, 0, 255);

  // fade the LED using the calibrated value:
  analogWrite(pwmout, sensorValue);
}
