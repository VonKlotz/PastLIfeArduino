void setup()
{
  for(int huj=1;huj<=13;huj++)
  pinMode(huj,OUTPUT);
}
void loop()
{
 for(int huj=11;huj<=13;huj++) 
 {
    Serial.println(huj);
    if(huj==1)
    Serial.println(13);
    else
    Serial.println(huj-1);
    delay(1000);
 }
}


