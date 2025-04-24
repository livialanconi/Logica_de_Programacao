// C++ code
//
void setup()
{
 Serial.begin(9600);// Inicia a Serial
}

//Variaveis - criacao e inicializacao
int numero1 = 0;
int numero2 = 0;
int soma = 0;
int subtracao = 0;
int multiplicacao = 0;
float divisao =0;

void loop()
{
  //entrada
 Serial.println ("Digite o primeiro numero");//pergunta
 while(! Serial.available() );//Espera o usuario digitar/dar um <Enter>
 numero1 = Serial.parseInt ();// resposta do usuario
 
 numero2 = 2;
   
  
  //processamento
  soma = numero1 + numero2;//7 - inteiro (int)
  subtracao = numero1 - numero2;//3 - inteiro (int)
  multiplicacao = numero1 * numero2;//10- inteiro (int)
  divisao = float(numero1) / float(numero2);//2.5 - real ( float )
  
  //saida
  Serial.println( "O resultado da soma eh:" + String(soma) );
  Serial.println( "O resultado da subtracao eh:" + String(subtracao) );
  Serial.println( "O resultado da multiplicacao eh:" + String(multiplicacao) );
  Serial.println( "O resultado da divisao eh:" + String(divisao) );
  
  delay(1000);//aguarda 1 segundo antes de rodar o loop novamente
  
}