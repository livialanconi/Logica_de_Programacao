/*
Você foi contratado para criar um sistema que analisa 
a situação de um aluno com base em suas notas e frequência.
*/

//Variaveis
float nota1 = 0;
int nota2 = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  //entrada
  Serial.println ("Digite a primeira nota");
  while( ! Serial.available() );
  nota1 = Serial.parseInt();
  
  Serial.println ("Digite a segunda nota");
  while( ! Serial.available() )
  nota2 = Serial.parseInt();
  
  //processamento (tive dificuldade nesse processamento todo, em todas as linhas, mas peguei referencia em outro arquivo. nao lembrava das palavfas)
  media = (nota1 + nota2) / 2;
  Serial.println ("Media:" + String(media));   //nao lembrei se colocava a conta da media em cima dos comandos ou em baixo.
  if (media == 10);
  Serial.println ("Parabéns! Nota máxima!");
  if media >= 6 e frequencia >= 75; {            //errei e esqueci que coloquei errado o "e", por isso deu erro.
  Serial.println ("Aprovado");
  } else (media < 6 e frequencia >= 75 ) {
  Serial.println ("Reprovado por nota");
  } else (media >= 6 e frequencia < 75) {
    Serial.println ("Reprovado por frequência");
  } else (media < 6 e frequencia < 75) {
    Serial.println ("Reprovado");
 
  (delay 10000);
}