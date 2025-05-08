/*
Faça um programa que receba o nome, cargo e salário de um funcionário.
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
Ao final exiba o nome, o cargo e o salário desse funcionário.
*/

//Variáveis
String nome = "";
String cargo = "";
float salario = 0;
//função que roda apenas uma vez
//serve para configurações dos sensores, bibliotecas, etc.

void setup()
{
 Serial.begin(9600);//carrega/inicia a porta serial
}

void loop()
{
  
  Serial.println( "|------------------------------|" );
  Serial.println( "|                              |" );
  Serial.println( "|          LOPAL-EX_08         |" );
  Serial.println( "|                              |" );
  Serial.println( "|------------------------------|" );
  Serial.println();//pula uma linha
  
  
 
  //entrada
  Serial.println("Digite seu nome:");//informa uma mensagem ao usuario (pergunta)
  while(! Serial.available() );// espera o usuário digitar e dar um <enter>
  nome = Serial.readString();//captura o dado digitado pelo usuário (resposta)
  //nome.trim();//limpa os espaços das extremidades da string
 
  Serial.println("Digite seu cargo:");
  while ( !Serial.available() ){}//espera o usuario digitar e dar o <enter>
  cargo = Serial.readString();
  
  Serial.println ("Qual é o salario?");
  while ( !Serial.available() ){}
  salario = Serial.parseFloat();//1000
  
  
  //processamento
  
  //saida
  //exibir nome, cargo e salario
  Serial.println ();//imprime uma linha vazia
  Serial.println ();//pula linha
  
  Serial.println ("Nome do funcionario" + nome);
  Serial.println ("Cargo do funcionario" + cargo);
  
  if (salario < 1000) {//true
    //calcular o novo salario
    salario = salario + (salario * 0.10);
    Serial.println ("Salario: R$ " + String (salario) );
  } else {
    Serial.println ("Salario: R$ " + String (salario) );
  }
  
  Serial.println ();//pula a linha
  Serial.println ();//pula a linha
  
}//fim do loop