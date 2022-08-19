#include <iostream>
using namespace std;

int main(){

  /* Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias. */

  int anos, meses, dias, idadedias;

  cout << "Informe o sua idade: " << endl;
  cin >> anos;

  cout << "Informe quantos meses: " << endl;
  cin >> meses;

  cout << "Informe quantos dias: " << endl;
  cin >> dias;

  idadedias = (anos * 365) + (meses * 30) + dias;

  cout << "Sua idade em dias é de: " << idadedias << endl;
  

  return 0;
}