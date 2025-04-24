//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Variaveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;


void setup()
{
  Serial.begin(9600);
}



void loop()
{
  //entrada
  Serial.println("Digite a sua idade");//pergunta a idade do usuario
  while( ! Serial.available() ){}//Aguarda o usuario digitar (para o loop)
  idade = Serial.parseInt();
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = 24 * 365 * idade;
  idadeMinutos = idadeHoras * 60;
  
  //saida
  Serial.println( "Sua idade em Meses: " + String(idadeMeses) );
  Serial.println( "Sua idade em Dias: " + String(idadeDias) );
  Serial.println( "Sua idade em Horas: " + String(idadeHoras) );
  Serial.println( "Sua idade em Minutos: " + String(idadeMinutos) );
  
}