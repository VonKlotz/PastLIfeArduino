const int anain = A0;
const int pwmout = 13;
const int cled = 12;

int sensorValue = 0;         // the sensor value
void setup() {
  
  pinMode(pwmout, OUTPUT);
  pinMode(cled, OUTPUT);
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
// read the sensor:
  sensorValue = analogRead(anain);

  // apply the calibration to the sensor reading
  sensorValue = map(sensorValue, 0, 1023, 0, 255);

  
  // fade the LED using the calibrated value:
  analogWrite(pwmout, sensorValue);
}
