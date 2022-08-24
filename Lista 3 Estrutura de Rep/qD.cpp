#include <iostream>
using namespace std;

int main(){ 

  /* Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500. */

  int somatorio;

  for(int i = 0; i <= 500; i++){
    if(i % 2 == 0){
      somatorio = somatorio + i;
      cout << somatorio << endl;
    }
  }
  
  return 0;
}