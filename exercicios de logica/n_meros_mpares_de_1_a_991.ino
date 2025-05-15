// exibir os numeros ímpares de 1 a 99

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (int contador = 1; contador <= 99; contador = (contador -1) + 3) {  
  Serial.println("Os numeros impares sao: " + String(contador));
  delay(1000);
  }
    delay (10000);
}
