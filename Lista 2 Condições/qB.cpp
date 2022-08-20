#include <iostream>
using namespace std;

int main() {

  /* Efetuar a leitura de um valor numérico inteiro positivo ou negativo
representado pela variável N e apresentar o valor lido como sendo positivo.
Dica: se o valor lido for menor que zero, ele deve ser multiplicado por -1. */

  int N;

  cout << "Informe um valor Positivo ou Negativo: " << endl;
  cin >> N;

  if (N < 0) {
    cout << "O valor Positivo é de: " << N * (-1) << endl;
  } else {
    cout << "O valor informado foi: " << N << endl;
  }

  return 0;
}