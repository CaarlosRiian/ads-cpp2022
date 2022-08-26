#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  /* Faça um programa que preencha aleatório dois vetores de números inteiros com 20 números cada. Depois de montados gere um terceiro vetor formado pela diferença dos dois
vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor formado pela multiplicação dos dois vetores lidos */

  srand(unsigned(time(0)));

  int vetorA[5], vetorB[5], vetorC[5], vetorD[5], vetorE[5];

  for(int i = 0; i < 5; i++){
    vetorA[i] = 1+rand()%20;
    vetorB[i] = 1+rand()%20;
    }

     for(int i = 0; i < 5; i++){
     cout << "Vetor A: " << vetorA[i] << endl;
    }

      cout << "\n";
    
     for(int i = 0; i < 5; i++){
     cout << "Vetor B: " << vetorB[i] << endl;
    }

      cout << "\n";

    cout << "Vetor formado pela diferença: " << endl;
    for(int i = 0; i < 5; i++){
      vetorC[i] = vetorA[i] - vetorB[i];
      cout << "Vetor C: " << vetorC[i] << endl;
    }

    cout << "\n";

    cout << "Vetor formado pela soma: " << endl;
    for(int i = 0; i < 5; i++){
      vetorD[i] = vetorA[i] + vetorB[i];
      cout << "Vetor D: " << vetorD[i] << endl;
    }

    cout << "\n";

    cout << "Vetor formado pela multiplicação: " << endl;
    for(int i = 0; i < 5; i++){
      vetorE[i] = vetorA[i] * vetorB[i];
      cout << "Vetor E: " << vetorE[i] << endl;
    }
    
  
  return 0;
}