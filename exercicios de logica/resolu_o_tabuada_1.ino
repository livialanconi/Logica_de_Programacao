/*criar um sistema de tabuada, pedir ao usuario que ele 
escolha uma das tabuadas.
*/

//variaveis
int n1;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o numero a qual deseja saber a tabuada:");
  while(! Serial.available()) {} //Espera o usuario digitar
  n1 = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = n1 * contador;
  Serial.println(String(n1) + " x " + String(contador) + " = " + String(resultado));  
  }
  
}