#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

  /* Escreva um programa para preencher um vetor A de 10 elementos inteiros e um
   * valor X. Em seguida escrever na tela "ACHEI" se o valor X existir em A e
   * "NÃO ACHEI" caso contrário.*/

  int vetorA[10], x;

  srand(unsigned(time(0)));

  for (int i = 0; i < 10; i++) {
    vetorA[i] = 1 + rand() % 15;
  }

  cout << "Informe um valor qualquer: " << endl;
  cin >> x;

  for (int i = 0; i < 10; i++) {
    if (x == vetorA[i]) {
      cout << "ACHEI" << endl;
    } else {
      cout << "NÃO ACHEI" << endl;
    }
  }

  return 0;
}