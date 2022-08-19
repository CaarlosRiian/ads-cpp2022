#include <iostream>
#include <math.h>
using namespace std;

int main(){ // Pode praticar primo!

  /* Faça um algoritmo para calcular a distância entre dois pontos. Entre com o valor de X1, X2, Y1, Y2 */

  int X1, X2, Y1, Y2, total;
  float raiz;

  cout << "Informe o valor de X1: " << endl;
  cin >> X1;

  cout << "Informe o valor de X2: " << endl;
  cin >> X2;

  cout << "Informe o valor de Y1: " << endl;
  cin >> Y1;

  cout << "Informe o valor de Y2: " << endl;
  cin >> Y2;

  total = pow(X2 - X1, 2) + (Y2 - Y1, 2);
  raiz = sqrt(total);

  cout << "O resultado encontrado de D: " << raiz;
  
  return 0;
}