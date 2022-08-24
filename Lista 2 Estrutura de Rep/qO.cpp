#include <iostream>
using namespace std;

int main(){ 

  /* Construir um programa que apresente como resultado a fatorial dos valores ímpares situados na faixa numérica de 1 até 10. */

 int prod = 1, aux = 1;

  for(int i = 1; i <= 10; i++){
    while(i % 2 != 0){
      for(int j = aux; j <= i; j++){
        prod *= i;
      }
      cout << "Fatorial de: " << i << " é de: " << prod << endl;
      break;
    }
  }
  
  return 0;
}