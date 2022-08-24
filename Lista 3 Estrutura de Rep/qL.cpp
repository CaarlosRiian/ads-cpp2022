#include <iostream>
using namespace std;

int main(){

  /* Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o
somatório da fatorial de cada valor lido. */

  unsigned long int fatorial = 1, somatorio = 0;

  for(int i = 1; i <= 15; i++){
    fatorial *= i;
    somatorio += fatorial;
    
    cout << fatorial << " " << somatorio << endl;
  }

  
  
  return 0;
}