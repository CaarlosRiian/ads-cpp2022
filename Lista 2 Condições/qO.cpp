#include <iostream>
using namespace std;

int main(){

  /* Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação somente se o resultado for maior que 30. */

  int num, multp;

  cout << "Informe um valor: " << endl;
  cin >> num;

  multp = num * 2;

  if(multp > 30){
    cout << multp;
  }
  
  return 0;
}