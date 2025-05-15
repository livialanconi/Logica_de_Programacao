// exibir os numeros pares de 60 a 80 e impares de 81 a 
//101 no mesmo laço while
int contador = 60;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  while (contador <= 101) {
    if (contador % 2 == 0 && contador <= 80) {
      Serial.println ("Numeros pares sao:" + String(contador));
    } 
    else if ((contador % 2) != 0 && contador >= 81) {
      Serial.println ("Numeros impares sao:" + String(contador));
    }
    contador++;
  }
   delay (10000);
  
}
    
