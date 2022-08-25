#include <iostream>
using namespace std; 

int main(){

  /* Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa. */

  int vet[10]; 

  for(int i = 0; i < 10; i++){
    cout << "Informe os valores do vetor: " << endl;
    cin >> vet[i];
  }

  for(int i = 9; i >= 0; i--){
    cout << vet[i] << " ";
  }
  
  return 0;
}