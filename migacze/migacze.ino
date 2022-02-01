void setup() //bike lights by VonKlotz
{
pinMode(0,OUTPUT);
pinMode(13,OUTPUT);
pinMode(2,OUTPUT);
pinMode(5,INPUT_PULLUP);
pinMode(6,INPUT_PULLUP);
pinMode(7,INPUT_PULLUP);
}

void loop()
{ 
  if (digitalRead(6) == LOW)
 {   digitalWrite(13,HIGH);
 }    else digitalWrite(13,LOW);
 
  
  if (digitalRead(5) ==LOW)
 {   digitalWrite(0,HIGH);
    delay(400);
    digitalWrite(0,LOW);
    delay(300);
 }
    else digitalWrite(0,LOW);

   if (digitalRead(7) ==LOW)
 {   digitalWrite(2,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    delay(300);
 }
    else digitalWrite(2,LOW);
}

    
  


