enum motorStates {
  DRIVE,
  VEER RIGHT,
  VEER LEFT,
  TURN_LEFT
};

enum states state;

unsigned long current_time, last_time;

int trigPin = 11;    
int echoPin = 12;    
long duration, cm, inches;

int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
/////////////////////////////////////
    pinMode(9,OUTPUT);
  state = DRIVE;
  last_time = millis();
  current_time = last_time;
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;  
  inches = (duration/2) / 74;   

  Serial.print("\nDistance: ");
  Serial.print(inches);
  Serial.print(" in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  if(inches <= 1){
    
  }
  delay(250);
  /////////////////////
  current_time = millis();
  
  switch(state)
  {
    case DRIVE
      analogWrite(9, 100);
      analogWrite(8, 100);
      if(inches <= 1){//transition between states at 1000 ms
        state = VEER_RIGHT;
        last_time = current_time;
      }
      if((inches >= 3) && (inches < 100){
        state = VEER_RIGHT;
        last_time = current_time;
      }
   
      break;
    case VEER_RIGHT
      analogWrite(9,100);
      analogWrite(8, 80);
      if(inches > 1){//transition between states at 1000 ms
        state = DRIVE;
        last_time = current_time;
      }
      break;
       case VEER_LEFT
      analogWrite(9, 80);
      analogWrite(8, 100);
      if(inches < 3){//transition between states at 1000 ms
        state = DRIVE;
        last_time = current_time;
      }
      break;
  }
}
