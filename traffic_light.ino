// Traffic light code 
// Green LED to pin 13 and 7
// Yellow LED to pin 12 and 6
// Red LED to pin 11 and 5

int x = 0;

void setup()  {
  pinMode(11, OUTPUT); //red // 11, 12, 13 EW
  pinMode(12, OUTPUT); //yellow
  pinMode(13, OUTPUT); //green
  pinMode(7, OUTPUT); //red // 7, 6, 5 NS
  pinMode(6, OUTPUT); //yellow
  pinMode(5, OUTPUT); //green
}

void loop(){
  x++;
  delay(1000);
  
  if(x==0)
  {
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
    
    digitalWrite(11, HIGH);
    digitalWrite(5, HIGH);
    delay(7000);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
  }
  if(x==1)
  {
    digitalWrite(11, LOW);
    digitalWrite(6, LOW);

    digitalWrite(13, HIGH);
    digitalWrite(7, HIGH);

    delay(7000);

    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }

  
}
