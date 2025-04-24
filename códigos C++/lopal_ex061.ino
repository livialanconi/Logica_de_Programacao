//Faça um programa que receba a medida em polegadas
//e exiba esse número em centimetros.

//Variaveis
float polegadas = 0;
float centimetros = 0;

void setup()
{
  Serial.begin(9600);//Inicia a comunicação serial;
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
  Serial.println("Digite a medida em polegadas:");
  while( ! Serial.available() );//Aguarda o usuário digitardar um <Enter>
  polegadas = Serial.parseFloat();//Lê a medida em polegadas
  
  //processamento
  centimetros = polegadas * 2.54;//Converte polegadas para centímetros
  
  //saida
  Serial.println(polegadas);
  Serial.println(" polegadas equivale a ");
  Serial.println(centimetros, 2);//Exibe o resultado com 2 casas decimais
  Serial.println(" centimetros.");
    
  delay(5000);//Aguarda 5 segundos antes de permitir nova entrada
}