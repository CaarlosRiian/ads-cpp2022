#include <iostream>
using namespace std;

int main(){ // Teminar esse carai.

  /* Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer, calcular e escrever quantas vezes esse número aparece no vetor. */
  
  int vet[20], num, cont;

    for(int i = 0; i < 20; i++){
      cout << "Informe 20 números: " << endl;
      cin >> vet[i];
    }

    cout << "Informe um número qualquer: " << endl;
    cin >> num;

    for(int i = 0; i < 20; i++){     
        if(num == vet[i]){
          cont++;
        }
      }

     cout << "O número informado: " << num << " Aparece " << cont << " Vezes."<< endl;
  
  return 0;
}