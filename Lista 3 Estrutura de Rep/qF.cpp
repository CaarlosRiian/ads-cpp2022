#include <iostream>
using namespace std;

int main(){ 

 /* Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que 200. Sugestão: a variável que controla o contador do laço deve ser iniciada
com valor 1. */

  for(int i = 1; i < 200; i++){
    if((i % 4) && (i < 200)){
      cout << i << endl;
    }
  }
  
  return 0;
}