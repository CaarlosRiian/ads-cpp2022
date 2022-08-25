#include <iostream>
using namespace std;

int main(){ 

  /* Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num vetor amédia de cada aluno, imprima o número de alunos com média maior ou igual a 7.0. */

  int notas[4], alunos[10], media;

  for(int i = 0; i < 10; i++){

    for(int n = 0; n < 4; n++){
      cout << "Informe as 4 notas: " << endl;
      cin >> notas[n];
      media += notas[n];
    }
    cout << "\nproximo aluno: \n" << endl;
    media = media / 4;
    alunos[i] = media;
    media = 0;
  } 

  cout << "\nAlunos que possuem média maior ou igual a 70: " << endl;
    for(int j = 0, c = 0; j < 10; j++){
      if(alunos[j] >= 70){
        cout << c++ << "°aluno, a média é: " << alunos[j] << endl;
      }
    }
  return 0;
}