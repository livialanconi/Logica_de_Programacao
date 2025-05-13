//VARIÁVEIS
float resultado;

int escolhaDaOperacao;
int contador =0;
  
//precisa pegar os valores da variavel numero1 e numero2
//criar um parametro numero3 que seja opcional, inicializar um valor
float somar(float numero1Param, float numero2Param, float numero3Param = 0){
  
  return (numero1Param + numero2Param + numero3Param); //retornar a soma
}

//quando usamos void na funcao, nao precisamos de um retorno
void subtrair (float numero1Param, float numero2Param){
  resultado = numero1Param;
  Serial.println("WOW!! O resultado foi: " + String(resultado));
}

void multiplicar (float numero1Param, float numero2Param){
  resultado = numero1Param;
  Serial.println("WOW!! O resultado foi: " + String(resultado));
}

void dividir (float numero1Param, float numero2Param){
  resultado = numero1Param;
  Serial.println("WOW!! O resultado foi: " + String(resultado));
}

void setup()
{
 Serial.begin(9600);
  
    float numero1 = 0;
    float numero2 = 0;
   

   do{
   Serial.println("Bem-vindo(a) a calculadora Inteligente ");
   Serial.println("Escolha uma das opcoes/operacoes:");
   Serial.println("1- Somar");
   Serial.println("2- Subtrair");
   Serial.println("3- Dividir");
   Serial.println("4- Multiplicar");

   while( ! Serial.available()){} 

   escolhaDaOperacao = Serial.parseInt();

   Serial.println("Agora, para realizar a operacao digite o primeiro numero:");
    while (! Serial.available()){}
   numero1 = Serial.parseFloat();

   Serial.println("Agora, para realizar a operacao digite o segundo numero:");
   while (! Serial.available());
   numero2 = Serial.parseFloat(); 
   
  //verificando a escolha da operacao
     
     
     switch(escolhaDaOperacao ){
       case 1:
       
       resultado = somar (numero1, numero2);//chamada da funcao somar
       Serial.println("WOW!! O resultado foi: " + String(resultado));
 
       //2a opcao - Serial.println("WOW!! O resultado foi: " + String(somar));
       break;

       case 2:
       subtrair(numero1, numero2); //chamando a funcao
       break;

       case 3:
       multiplicar(numero1, numero2);
       break;

       case 4:
       dividir(numero1, numero2);
       break;

       default:
       Serial.println("Opcao invalida");

     }
     Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
    while(!Serial.available());
    
    if(Serial.readString() == "S")
    {
    	contador++;
    }
    else
    {
      	contador = 0;
    	Serial.println("Ate breve, obrigado por usar nossa calculadora inteligente!!! :)");
      	Serial.println("Caso queira voltar, reinicie o sistema.");
    }
    
   } 
  while(contador != 0);  
}

void loop(){}
 