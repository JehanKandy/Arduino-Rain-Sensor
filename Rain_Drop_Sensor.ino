//.................JEHANKANDY...............
//.............Arduino Rainroof Sensor......


void setup() {
 pinMode(1,OUTPUT);
 pinMode(2,OUTPUT);
 Serial.begin(9600);

}

void loop() {

int sensorValue = analogRead(A0);
Serial.println(sensorValue);
delay(500);

if(analogRead(A0) > 500){
  digitalWrite(2,LOW);
  
}else{
  digitalWrite(2,HIGH);

}

}
//...........Develop By: JehanKandy.............
//................Thank You.....................
