#include <iostream>
using namespace std;

int main() {

  /* Elaborar um programa que leia valores positivos inteiros até que um valor
   * negativo seja informado. Ao final devem ser apresentados o maior e o menor
   * valores informados pelo usuário. */

  int num = 0, cont = 0;
  int maior = 0, menor = 0, menorposit = 0;

  while(cont >= 0){
    cout << "Informe valores positivos: " << endl;
    cin >> num;
    while(num > maior){
      maior = num;
      break;
    }
    while(num < maior){
      menor = num;
      break;
    }
    while(num > 0 && num < maior){
      menorposit = num;
      break;
    }
    while(num < 0){
      cont = -1;
      break;
    }
  }

  cout << "O maior valor foi de: " << maior << endl;
  cout << "O menor valor foi de: " << menor << endl;
  cout << "O menor valor positivo foi de: " << menorposit << endl;  
  
  return 0;
}