
void setup() {
  
  Serial.begin(9600);
  // initialize serial communication at 9600 bits per second 
  //you can change it according to your prefrences
}



void loop() {
  // for reading the input on analog pin 0:
  int sensorValue = analogRead(A0);

  
  // Convert the analog reading (which goes from (0 - 1023)bits  to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);

  
  // print out the value you read at port A0
  Serial.println("voltage:");
  Serial.println(voltage);

  delay(10);     //space between two conescutive numbers
}
