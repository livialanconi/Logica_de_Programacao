//Faça um programa que receba o nome, cargo e 
//salário de um funcionário.Calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o novo salário desse funcionário.

//Variaveis
String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin(9600);//Inicia a comunicação serial
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
  Serial.println("Digite o nome do funcionario:");
  while(! Serial.available() );// Aguarda o usuário digitar
  nome = Serial.readStringUntil('\n');//Lê o nome até o Enter
  nome.trim();//Remove espaços extras
  delay(500);
  
  Serial.println("Digite o cargo do funcionario:");
  while(! Serial.available() );//Aguarda o usuário digitar
  cargo = Serial.readStringUntil('\n');//Lê o cargo até o Enter
  cargo.trim();//Remove espaços extras
  delay(500);
  
  Serial.println("Digite o salario do funcionario:");
  while(! Serial.available() );//Aguarda o usuário digitar
  salario = Serial.parseFloat();//Lê o salário
  delay(500);
  
  //processamento
  novoSalario = salario * 1.10;//Calcula o salário com 10% de aumento
  
  //saida
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Cargo: ");
  Serial.println(cargo);
  Serial.print("Novo salario (com 10% de aumento): ");
  Serial.println(novoSalario, 2);// Exibe o novo salário com 2 casas decimais
  delay(7000);//Aguarda 7 segundos antes de permitir nova entrada
}