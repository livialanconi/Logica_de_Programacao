// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{   
  for(int contador = 5; contador >= 1; contador--){
  Serial.println("Contador do For: " + String(contador));
  }
  delay(1200);

}
