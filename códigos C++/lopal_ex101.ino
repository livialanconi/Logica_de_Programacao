/* Elabore um programa para cálculo de preços de produtos que solicite o preço de compra 
do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se O percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário
que o produto será vendido com uma margem muito pequena de lucro.
*/

//Variáveis
float precoProduto = 0;
float percentual = 0;
float valorVenda = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
	Serial.println("Digite o preco da compra:");
  	while (! Serial.available());
  	precoProduto = Serial.parseFloat();
       
  	Serial.println("Digite o percentual a ser aplicado: ");
  	while (! Serial.available());
  	percentual = Serial.parseFloat();
         
  	valorVenda = precoProduto + (precoProduto / 100 * percentual);
  
  	Serial.println("O valor do produto eh: R$ " + String(precoProduto));
  	Serial.println("O percentual eh: " + String(percentual) + "%");
  	Serial.println("Preco de venda: R$ " + String(valorVenda));
  
    if (percentual < 50) {//mostra a mensagem apenas se o lugro for menor que 50%
      Serial.println("O lucro de sua venda sera baixo");
    }
  
  	delay(10000);
  //O percentual eh: 49.99%
}