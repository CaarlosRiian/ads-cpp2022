#include <iostream>
using namespace std;

int main(){ // Praticar mais essa questão!

  /* Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de
suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário
final do vendedor. */

  double sal, comiss, valor, tv, vendas, novosal;

  cout << "Informe o salário: " << endl;
  cin >> sal;

  cout << "Informe a comissão: " << endl;
  cin >> comiss;

  cout << "valor do carro: " << endl;
  cin >> valor;

  cout << "Total de vendas no mês: " << endl;
  cin >> tv;

  vendas = (tv * valor * 5) / 100;
  novosal = sal + comiss + vendas;

  cout << "O novo salário é de: " << novosal << endl;
  
  return 0;
}