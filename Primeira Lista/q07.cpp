#include <iostream>
#include <math.h>
using namespace std;

int main(){

 /* Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao quadrado, sem efetuar o armazenamento do resultado em memória. */

  int num;

  cout << "Informe um valor: " << endl;
  cin >> num;

  cout << pow(num,2) << endl;
  
  return 0;
}