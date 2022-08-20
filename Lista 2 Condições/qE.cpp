#include <iostream>
#include <math.h>
using namespace std;

int main() {

  /* Efetuar a leitura de três valores numéricos (representados pelas variáveis
   * A, B e C) e processar o cálculo da equação completa de segundo grau,
   * utilizando a fórmula de Bhaskara(considerar para a solução do problema
   * todas as possíveis condições para delta: delta < 0 - não há solução real)
   * Lembre-se de que é completa a equação de segundo grau que possui todos os
   * coeficientes A, B e C diferentes dezero. O programa deve apresentar
   * respostas para todas as condições estabelecidas para delta. */

  float A, B, C, x1, x2, delta;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  cout << "Informe o valor de C: " << endl;
  cin >> C;

  delta = pow(B,2) - (4 * A * C);

  if(delta < 0){
    cout << "Não há solução real." << endl;
  }
  if(delta > 0){
    x1 = (-B + sqrt(delta)) / (2 * A);
    x2 = (-B - sqrt(delta)) / (2 * A);
  
  cout << "O valor de delta foi: " << delta << endl;
  cout << "O valor de x1 foi: " << x1 << endl;
  cout << "O valor de x2 foi: " << x2 << endl;
  }
  if(delta == 0){
    x1 = (- B + sqrt(delta)) / (2 * A);
    cout << "Uma única raiz real: " << endl;
  }


  return 0;
}