//Faça um programa que receba um número
//e exiba o seu dobro.

//Variaveis
int numero = 0;
int dobroNumero = 0;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  
    //Cabecalho
  Serial.println( "|------------------------------|" );
  Serial.println( "|                              |" );
  Serial.println( "|          LOPAL-EX_03         |" );
  Serial.println( "|                              |" );
  Serial.println( "|------------------------------|" );
  Serial.println();//pula uma linha
  
  
 
 //entrada
  Serial.println("Digite um numero qualquer");//pergunta um número da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  numero = Serial.parseInt();//resposta do usuário
  
  //processamento
  dobroNumero = numero * 2;
  
  //saida
  Serial.println("O dobro do numero digitado eh: " + String (dobroNumero) );
  delay(5000);//aguarda 5 segundos antes de rodar o loop novamente
}