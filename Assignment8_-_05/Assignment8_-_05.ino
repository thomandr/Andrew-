int wallSensor1 = 12;
 int wallSensor2 = 15;
 int wallSensor3 = 10;
void setup() {
Serial.begin(9600);

}

void loop() {
  char sensorArray[75];

  sprintf(sensorArray, "Wall Sensor1 = %d cm, Wall Sensor2 = %d cm, Wall Sensor3 = %d cm.", wallSensor1, wallSensor2, wallSensor3);

 Serial.println(sensorArray);

}
