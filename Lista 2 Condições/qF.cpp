#include <iostream>
using namespace std;

int main() {

  /* Ler três valores inteiro representados pelas variaveis A, B e C e
   * apresentar os valores lidos dispostos em ordem crescente. */

  int A, B, C, temp;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  cout << "Informe o valor de C: " << endl;
  cin >> C;

  if (B > A) {
    temp = A;
    A = B;
    B = temp;
  }
  if (C > A) {
    temp = A;
    A = C;
    C = temp;
  }
  if (C > B) {
    temp = B;
    B = C;
    C = temp;
  }

  cout << "Valores em ordem crescente: " << endl;
  cout << A << " " << B << " " << C << endl;

  return 0;
}