#include <iostream>
using namespace std;

int main(){ // Essa é uma das maneiras de resolver, so não sei se desse jeito da ruim.

  /* Elaborar um programa que apresente os quadrados sem armazená-los na memória dos valores inteiros existentes na faixa de valores de 15 a 200 com saltos de 3 em 3. */

  for(int i = 15; i <= 200; i++){
    if(i % 3 == 0){
      cout << i << " " << endl;
    }
  }
  
  return 0;
}