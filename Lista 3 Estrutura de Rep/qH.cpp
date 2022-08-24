#include <iostream>
using namespace std;

int main() {

  /* Escrever um programa que apresente como resultado a potência de uma base
qualquer elevada a um expoente qualquer, ou seja, de BE, em que B é o valor da
base e E o valor do expoente. Considere apenas a entrada de valores inteiros e
positivos, ou seja, de valores naturais. Sugestão: não utilize o formato “base ↑
expoente”, pois é uma solução muito trivial. Use a técnica de laço, em que o
valor da base deve ser multiplicado o número de vezes determinado no expoente.
*/

  int B, E, result = 1;

  cout << "Informe a Base: " << endl;
  cin >> B;

  cout << "Informe o Expoente: " << endl;
  cin >> E;

  for (int i = 1; i <= E; i++) {
    result = result * B;
  }

  cout << "O valor da base elevada ao expoente é de: " << result;

  return 0;
}