// Faça um programa que receba a medida em centímetros
// e exiba esse número em polegadas.

//Variaveis
float numeroCm = 0;
float numeroPolegada = 0;

void setup()
{
  Serial.begin(9600);//entrada
}

void loop()
{
  
  Serial.println( "|------------------------------|" );
  Serial.println( "|                              |" );
  Serial.println( "|          LOPAL-EX_03         |" );
  Serial.println( "|                              |" );
  Serial.println( "|------------------------------|" );
  Serial.println();//pula uma linha
  
  
  
  //entrada
  Serial.println("Digite uma medida em centimetros");//pergunta uma medida em centímetros da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numeroCm = Serial.parseFloat();//resposta do usuário
  
  //processamento
  numeroPolegada = numeroCm * 2.54;
  
  //saida
  Serial.println("A conversao de centimetro para polegada eh: " + String (numeroPolegada) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}