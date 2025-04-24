//Faça um programa que receba o ano de nascimento de uma pessoa
//e o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Variaveis
int anoNasc = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;

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
  Serial.println("Digite seu ano de nascimento");//pergunta o ano de nascimento do usuario
  while( ! Serial.available() );//Aguarda o usuario digitar (para o loop)
  anoNasc = Serial.parseInt();
  
  Serial.println("Digite o ano atual");//pergunta o ano atual do usuario
  while( ! Serial.available() );//Aguarda o usuario digitar (para o loop)
  anoAtual = Serial.parseInt();
  
  //processamento
  idade= anoAtual - anoNasc;
  idadeSemanas = idade * 12 * 4;
  
  //saida
  Serial.println( "Sua idade atual: " + String(idade) );
  Serial.println( "Sua idade em Semanas: " + String(idadeSemanas) );
}