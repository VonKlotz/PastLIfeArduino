const int pot1 = A5;  // Potentiometer 1
const int led = (12, 13);   // PWM output +led onboard

int sensin = 0;  //sensor in val analog read
byte pwm = 0;  // sens out val for pwm

void setup() {
Serial.begin(9600);
}

void loop() {
sensin = analogRead(pot1);  // Potentiometer 1
pwm = map(sensin, 0, 1023, 0, 255);  // PWM output val
pwm = constrain(pwm, 0, 255);
analogWrite(led, pwm);
 
Serial.print(" pot = ");
Serial.print(sensin);
Serial.print(" pwm = ");
Serial.println(pwm);
 
 delay(2);
}
