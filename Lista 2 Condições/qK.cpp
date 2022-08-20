#include <iostream>
using namespace std;

int main(){

  /* Efetuar a leitura de um valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve apresentar a mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor estiver fora da faixa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida." */

  int num;

  cout << "Informe um valor: " << endl;
  cin >> num;

  if(num <= 9){
    cout << "O valor está na faixa permitida" << endl;
  } else {
    cout << "O valor está fora da faixa permitida" << endl;
  }
  
  return 0;
}