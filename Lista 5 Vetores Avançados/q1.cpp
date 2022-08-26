#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  /* Utilizando vetores, crie um programa que organize uma quantidade qualquer
de números inteiros fornecidos de forma aleatória da seguinte forma: primeiro os
números pares em ordem crescente e depois os números ímpares em ordem
decrescente. */

  int VET[10];

  srand(unsigned(time(0)));

  cout << "Números em pares em ordem crescente: " << endl;
  for (int i = 0; i < 10; i++) {
    VET[i] = 1 + rand() % 15;
    if (VET[i] % 2 == 0) {
      cout << VET[i] << " ";
    }
  }

  cout << "\n";

  cout << "Números ímpares em ordem decrescente: " << endl;
  for (int i = 10; i >= 0; i--) {
    if (VET[i] % 2 != 0) {
      cout << VET[i] << " ";
    }
  }

  return 0;
}