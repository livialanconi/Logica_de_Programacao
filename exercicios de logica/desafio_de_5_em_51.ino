// exibir do 0 a 100 de 5 em 5

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int contador = 0; contador <= 100; contador += 5) {
    Serial.println ("Contador eh:" + String(contador));
  }
    delay (10000);
}