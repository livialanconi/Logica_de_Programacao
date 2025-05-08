// C++ code
int LED_AZUL = 8;
//inicializar/carregar configurações iniciais no Arduino
void setup()
{
	//pinMode(numeroDaPorta, entrada/saida);
  	pinMode(LED_AZUL, OUTPUT);
 	Serial.begin(9600);
}

void loop()
{
  
  if( LED_AZUL == 8   ) {//true
  	String nome = "Eduardo";// guarda/atribui/coloca um texto à variável nome
    String sobrenome = "Muniz";// atribui um texto à variável sobrenome
    int idade = 61;//atribui um número à variável idade
    Serial.println("O " + nome + " " + sobrenome + " tem " + String(idade) +" anos" );
	digitalWrite(LED_AZUL, HIGH);//acende o led na porta 8 (led azul)
  }
  
  delay(500);
}//fim do loop

/*	OPERADORES: 

	Aritméticos
    + - * / % (soma, subtração, multiplicação, divisão e módulo)
    
    Relacionais (de comparação) - retornam true ou false
    >	maior que				8 > 20  		- false
    <	menor que				LED_AZUL < 20 	- true
    >=	maior ou igual a		50 >= 50		- true 
    <= menor ou igual a			50 <= 50		- true
    == igual a					"Eduardo" == "eduardo" - false
    != diferente de				"Eduardo" != "eduardo" - true
    
    
	//Lógicos
    && - e 			- Retorna true se as duas partes forem true
    || - ou			- Retorna true se apenas uma das partes for true
    !  - não		- Inverte o resultado lógico
    
    !20 > 50		- true
    
    Atribuição
    float x = 200;
    
    =	atribuição				x = 50 + 2 		- atribui 50 na variável x
    +=	atribui somando			x += 50	(x = x + 50)		- atribui 50 somando ao valor que já tiver na variável x
    -=	atribui subtraindo		x -= 50	(x = x - 50)		- atribui 50 subtraindo ao valor que já tiver na variável x
    *=	atribui multiplicando	x *= 50	(x = x * 50)		- atribui 50 multiplicando ao valor que já tiver na variável x
    /=	atribui dividindo		x /= 50	(x = x / 50)		- atribui 50 dividindo ao valor que já tiver na variável x
*/