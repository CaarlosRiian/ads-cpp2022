#include <iostream>
using namespace std;

int main(){ // Verificar essa questão.

  /* Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores pares situados na faixa numérica de 50 até 70. */

  int soma = 0; 
  float media = 0;

  for(int i = 50; i <= 70; i++){
    if(i % 2 == 0){
      soma += i;
      media *= i / 20;
    }
  }

  cout << "O somatorio: " << soma << endl;
  cout << "A média: " << media << " ";
  
  return 0;
}