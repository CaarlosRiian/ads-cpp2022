#include <iostream>
using namespace std;

int main(){

  /* Ler um valor numérico inteiro e apresentar uma mensagem informando se o valor fornecido é par ou ímpar */

  int num;

  cout << "Informe um valor: " << endl;
  cin >> num;

  if(num % 2 == 0){
    cout << "O número par" << endl;
  } else {
    cout << "O número é ímpar" << endl;
  }

  return 0;
}