// C++ code
void setup()
{
  Serial.begin(9600);
  
  //vetores - variaveis construidas (estrutura de dados)
  //podem guardar varios valores em um unico nome
  
  int numeross[5] = {10, 20, 30, 40, 50};
  numeross [3] = 400;
  
  for (int i = 0; i <= 4; i++){
    Serial.println (numeross[i]);
  }
  
}//fim do setup

void loop()
{
  
}
