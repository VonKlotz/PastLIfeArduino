void setup() //bike lights by VonKlotz
{
pinMode(0,OUTPUT); //lefty led
pinMode(3,OUTPUT); //stop led
pinMode(2,OUTPUT);  //right led
pinMode(1,OUTPUT); //main lights led
pinMode(4,INPUT_PULLUP); // main light switch
pinMode(5,INPUT_PULLUP); //stop button
pinMode(6,INPUT_PULLUP); //left button
pinMode(7,INPUT_PULLUP); //rihgt button
pinMode(8,INPUT_PULLUP);  //emergency button
}

void loop() { 
  if (digitalRead(5) == LOW) //stop
{   digitalWrite(3,HIGH);
}    else digitalWrite(3,LOW); 
  if (digitalRead(6) ==LOW) //left
{   digitalWrite(0,HIGH);
    delay(400);
    digitalWrite(0,LOW);
    delay(300);
}    else digitalWrite(0,LOW);

  if (digitalRead(7) ==LOW) //right
  { digitalWrite(2,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    delay(300);
}    else digitalWrite(2,LOW);
   if (digitalRead(8) ==LOW) //emergency
{   digitalWrite(2,HIGH);
    digitalWrite(0,HIGH);
    delay(400);
    digitalWrite(2,LOW);
    digitalWrite(0,LOW);
    delay(300);
    }
    if (digitalRead(4) ==LOW) //main light swith
    digitalWrite(1,HIGH); //main light led
    else digitalWrite(1,LOW);    
    
}

    
  



