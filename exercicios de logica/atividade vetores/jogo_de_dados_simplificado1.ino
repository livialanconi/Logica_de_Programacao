// C++ code
//
int palpite;
int numeroSorteado;
int qtdPontos;

void cabecalho()
{
  Serial.println("--------------------------------");
  Serial.println("     PROGRAMA JOGO DE DADOS     ");
  Serial.println("--------------------------------");
  Serial.println();
  delay(1000);
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= 5; i ++)
  {
    Serial.print(".");
    delay(750);
  }
}
void setup()
{
  {

    Serial.begin(9600);
    randomSeed(analogRead(0));
  }
}
void loop()
{
  {
    cabecalho();

    Serial.println("Digite um palpite entre 1 e 6");
    while(!Serial.available());
    int palpite = Serial.parseInt();

    int numeroSorteado = random(1, 7);

    Serial.println("Jogando o dado");


    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero sorteado: " + String(numeroSorteado));

    if(palpite == numeroSorteado)
    {
      Serial.println("Parabens, voce acertou!");
    } else {
      Serial.println("Que pena, tente outra vez!");
    }

    Serial.println("Reinicie o programa");
    Serial.println();
    delay(700);
  }
}