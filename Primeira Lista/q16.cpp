#include <iostream>
using namespace std;

int main(){

  /* Elaborar um programa que leia uma medida em pés, calcular, armazenar e apresentar o seu valor convertido em metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 centímetros. */

  float pes, metros;

  cout << "Informe a medida em pés: " << endl;
  cin >> pes;

  metros = pes / 3.281;

  cout << "O valor convertido em metros: " << metros;
    
  return 0;
}