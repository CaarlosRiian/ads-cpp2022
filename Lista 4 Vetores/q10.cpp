#include <iostream>
using namespace std;

int main() {

  /* Faça um algoritmo para preencher um de 20 números. Após isto, deverá ser
lido mais um número qualquer e verificar se esse número existe no vetor ou não.
Se existir, o algoritmo deve pedir um novo número. */

  int vet[10], vnum;

  for (int i = 0; i < 10; i++) {
    cout << "Informe os valores do vetor: " << endl;
    cin >> vet[i];
  }

  cout << "Informe outro valor: " << endl;
  cin >> vnum;

  for (int i = 0; i < 10; i++) {

    while(vnum == vet[i]) {
      cout << "Número já existente, informe outro: " << endl;
      cin >> vnum;
    }
  }

  return 0;
}