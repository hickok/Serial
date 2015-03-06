int sensorReading = 11;
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  case 10:
    Serial.println("dazzling");
    break;
  default:
    Serial.println("... I don't know!");
  } 
}
void loop()
{
}

