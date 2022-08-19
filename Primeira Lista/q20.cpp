#include <iostream> 
using namespace std;

int main(){

  /* Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas variáveis A e B. Calcular, armazenar e apresentar os resultados das quatro operações aritméticas básicas. */

  float A, B;
  
  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  cout << "A soma dos valores: " << A + B << endl;
  cout << "A subtração do valores: " << A - B << endl;
  cout << "A multiplicação dos valores: " << A * B << endl;
  cout << "A divisão dos valores: " << A / B << endl;
  
  return 0;
}