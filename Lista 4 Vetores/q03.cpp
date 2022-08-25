#include <iostream>
using namespace std; 

int main(){

  /* Faça um Programa que leia 4 notas, mostre as notas e a média na tela. */

  int notas[4], msoma, media;

  for(int i = 0; i < 4; i++){
    cout << "Informe as notas: " << endl;
    cin >> notas[i];
  }

  for(int i = 0; i < 4; i++){
    cout << "Notas Informadas: " << notas[i] << " " << endl;
    msoma += notas[i];
  }
  
  media = msoma / 4;
   cout << "Média: " << media << endl;
 
  return 0;
}