int a = 6;
int b = 8;
int h = sqrt(a*a + b*b);

void setup()
{
  Serial.begin(9600);
  Serial.println("Calcul hipotenusa ");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);
}


void loop()
{
}
