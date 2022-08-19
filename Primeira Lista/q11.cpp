#include <iostream>
using namespace std;

int main(){ // Praticar mais essa questão!

  /* O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, 
escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor. */

  float carnovo, custfab, impost, consum;

  cout << "Informe o valor de fabrica do seu carro: " << endl;
  cin >> custfab;

  impost = (custfab * 0.45);
  consum = (custfab * 0.28);
  carnovo = custfab + impost + consum;

  cout << "O valor do carro novo é de: " << carnovo << endl;
  
  
  return 0;
}