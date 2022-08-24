#include <iostream>
using namespace std; 

int main(){ // Ainda em duvidas!

  /* Construir um programa que apresente a soma dos cem primeiros números naturais (1 + 2 + 3 +...+ 98 + 99 + 100). */

  int soma = 0;

for(int i = 1; i <= 100; i++){
  soma = soma + i;
  cout << soma << endl;
}
  
  
  return 0;
}