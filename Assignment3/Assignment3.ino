void setup() {
  pinMode(13, OUTPUT); //Setting up pin 13 as an output
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH); 
  delay(500); 
   digitalWrite(13, LOW);
  delay(500); 
   digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW); 
  delay(1500);
  
  digitalWrite(13, HIGH);
  delay(1500);
  digitalWrite(13, LOW);
  delay(500);
   digitalWrite(13, HIGH);
  delay(1500);
   digitalWrite(13, LOW); 
  delay(1500);
  
  digitalWrite(13, HIGH);
  delay(1500);

  
  char sendingString[100];
  char sendingTime[100];
  int outputTime = 0;
  
  sprintf(sendingString, "Andrew Thompson \nEGR 107 \n02 \n1/15/2020");
  Serial.println(sendingString);

  while(1)
  {
    sprintf(sendingTime, "Time = %d\n", outputTime);
    Serial.println(sendingTime);
    delay(1000);
    outputTime++;
    }
  
}
//High = On/True, Low = Off/False
