const int incb = 2;
const int decb = 3;
const int out = 13;
int stan[] = {
  0, 1, 2, 3, 4, 5};


int ostan = 0;
int sped = 10;
void setup() {
 pinMode(incb, INPUT_PULLUP);
 pinMode(decb, INPUT_PULLUP);
 pinMode(out, OUTPUT);
 
 Serial.begin(9600);
 
}

void loop() {
   for(int stana = 0; stana <5;) {}

  if (incb == LOW) {  stana++; } 
  delay(5); 
    if (decb == LOW) {  stana--; }
  delay(5);   

   Serial.println(sped);

  switch (stan[stana]); {
      case '0':
        sped = 0;
        break;
      case '1':
        sped = 20;
        break;
      case '2':
        sped = 40;
        break;
      case '3':
        sped = 60;
        break;
      case '4':
           sped = 80;
        break;
        case '5':
        sped = 100;
        break;
}

delay(50);
}
