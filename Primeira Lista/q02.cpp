#include <iostream>
using namespace std;

int main(){

 /* Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo. */

  int base, altura, result;

  // Programa que pede ao usuario a informar os valores da base e altura, e salva na variavel.
  cout << "Informe o valor da base: " << endl;
  cin >> base;

  cout << "Informe o valor da altura: " << endl;
  cin >> altura;

  // Programa que calcula o valor da base vezes a altura.
  result = base * altura;

  cout << "A área do retângulo é de: " << result << endl;
  
  return 0;
}