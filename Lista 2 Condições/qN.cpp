#include <iostream>
using namespace std;

int main(){

  /* Efetuar a leitura de três valores inteiros desconhecidos representados pelas variáveis  A, B, C. Somar os valores fornecidos e apresentar o resultado somente se for maior ou igual a 100. */

  int A, B, C, soma;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  cout << "Informe o valor de C: " << endl;
  cin >> C;

  soma = A + B + C;

  if(soma >= 100){
    cout << soma;
  }
  
  return 0;
}