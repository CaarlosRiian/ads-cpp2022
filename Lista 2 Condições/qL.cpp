#include <iostream>
using namespace std;

int main(){ // Não entendi bem oque o exercicio pedia, mas consegui fazer praticamente assim

  /* Fazer leitura de um valor numérico inteiro qualquer e apresentá-lo caso não seja maior que 3. */

  int num;

  cout << "Informe um valor: " << endl;
  cin >> num;

  if(num <= 3){
    cout << num;
  }
  
  return 0;
}