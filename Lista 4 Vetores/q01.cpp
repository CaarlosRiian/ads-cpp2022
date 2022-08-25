#include <iostream>
using namespace std;

int main(){

  /* Faça um Programa que preencha um vetor de 5 números inteiros e mostre-os */

  int vet[5];

  for(int i = 0; i < 5; i++){
    cout << "Informe os 5 valores para o vetor: " << endl;
    cin >> vet[i];
  }

  cout << "Valores informados do vetor: " << endl;
  for(int i = 0; i < 5; i++){
    cout << vet[i] << " ";
  }
  
  return 0;
}