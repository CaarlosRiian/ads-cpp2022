#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  /* Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdo igual. Se existir, imprima o valor e os índices. */

  // (O índice seria mostrar em que posição o elemento se encontraria no vetor.)

  srand(unsigned(time(0)));

  int vetorA[10], vetorB[10];
    
    for(int i = 0; i < 10; i++){
      vetorA[i] = 1+rand()%20;
      vetorB[i] = 1+rand()%20;
    }

cout << "\n";
    cout << "Elementos do vetor A: " << endl;
    for(int i = 0; i < 10; i++){
      cout << vetorA[i] << " | ";
    }

cout << "\n";
    cout << "Elementos do vetor B: " << endl;
    for(int i = 0; i < 10; i++){
      cout << vetorB[i] << " | ";
    }

cout << "\n";

    for(int i = 0; i < 10; i++){
     for(int j = 0; j < 10; j++){
       if(vetorA[i] == vetorB[j]){
         cout << vetorA[i] << " Nas posições A: " << (i + 1) << " B: " << (j + 1) << endl;  
         }
       }
      }
    
  return 0;
}