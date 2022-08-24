#include <iostream>
using namespace std;

int main(){ 

  /* Elaborar um programa que mostre os resultados da tabuada de um número qualquer, a qual deve ser apresentada de acordo com sua forma tradicional. */

  int num, multp;

  cout << "Informe um número qualquer: " << endl;
  cin >> num;

  for(int i = 0; i <= 10; i++){
    multp = num * i;
    cout << num << " X " << i << " = " << multp << endl;
  }

  return 0;
}