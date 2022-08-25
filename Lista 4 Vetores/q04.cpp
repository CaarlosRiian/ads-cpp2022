#include <iostream>
using namespace std;

int main(){

  /* Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida. */

  int idade[5], altura[5];

  cout << "Informe sua altura como no exemplo seguinte: \n se você tiver 1,70 digite: 170." << endl;

  cout << "\n";
  
  for(int i = 0; i < 5; i++){
    cout << "Informe a idade: " << endl;
    cin >> idade[i];

    cout << "Informe a altura: " << endl;
    cin >> altura[i];
  }

  for(int i = 4; i >= 0; i--){
    cout << "Alturas: " << altura[i] << endl;
    cout << "Idades: " << idade[i] << endl;
  }
  
  return 0;
}