#include <iostream>
using namespace std;

int main(){

  /* Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário. */ 

  int sal;
  float novosal, reajuste;

  cout << "Informe o salário: " << endl;
  cin >> sal;

  cout << "Informe o reajuste: " << endl;
  cin >> reajuste;
  
  novosal = ((reajuste / 100) * sal) + sal;

  cout << "O novo salário é: R$ " << novosal << endl; 
  
  return 0;
}

