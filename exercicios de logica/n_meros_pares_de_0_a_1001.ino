// exibir os numeros pares de 0 a 100

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int contador = 0; contador <= 100; contador += 2) {
    Serial.println ("Os numeros pares sao:" + String(contador));
  }
    delay (10000);
}