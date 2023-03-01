// C++ code
//
#define led 5

void setup()
{
  pinMode(Lled, OUTPUT);
  
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
}
