#include <iostream>
using namespace std;

int main(){

  /* Faça um algoritmo que converta graus em radianos. Imprima o valor em radianos e o seu correspondente em graus. */

  float valor, radiano;

  cout << "Informe um valor de graus: " << endl;
  cin >> valor;

  radiano = valor * 3.14159 / 180; 

  cout << "O valor convertido e radiano: " << radiano << " °RAD";
  
  return 0;
}