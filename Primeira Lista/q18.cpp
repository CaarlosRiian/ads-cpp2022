#include <iostream>
using namespace std;

int main(){

  /* Construir um programa que leia um valor numérico inteiro e apresente como resultado armazenado em memória os seus valores sucessor e antecessor. */

  int val, antec, suce;

  cout << "Informe um valor: " << endl;
  cin >> val;

  antec = val - 1;
  suce = val + 1;

  cout << "O valor informado foi: " << val << endl;
  cout << "O valor antecessor: " << antec << endl;
  cout << "O valor sucessor: " << suce << endl;
  
  return 0;
}