#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  /* Faça um algoritmo para ler 15 números e armazenar em um vetor VET,
verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram */

  int VET[15];

  srand(unsigned(time(0)));

  for(int i = 0; i < 15; i++) {
    VET[i] = 1 + rand() % 15;

    for(int j = i + 1; j < 5; j++) {
      if(VET[i] == VET[j]) {
        cout << "Na posição: " << i + 1 << " e " << j + 1
             << "\nPossui o mesmo valor de: " << VET[i] << endl;
        break;
      }
    }
  }

  return 0;
}