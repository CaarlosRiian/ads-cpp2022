#include <iostream>
using namespace std;

int main() {

  /* Faça um Programa que leia dois vetores com 10 elementos cada. Gere um
terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos
elementos intercalados dos dois outros vetores. */

  int vetA[10], vetB[10], vetC[20], aux = 0;

  for (int i = 0; i < 10; i++) {
    vetA[i] = i;
  }
  for (int i = 10; i >= 0; i--) {
    vetB[i] = i;
  }

  aux = 0;
  for (int i = 0; i < 20; i++) {
   vetC[aux] = vetA[i];
    aux++;
    vetC[aux] = vetB[i];
    aux++;  
  }

  return 0;
}