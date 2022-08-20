#include <iostream>
using namespace std;

int main(){

  /* Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis N1, N2, N3, N4.
Calcular a média aritmética ( Variável MD) desse aluno e apresentar a mensagem "Aprovado" se a média obtida for maior ou igual a 5; caso contrário, apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o valor da média obtida pelo aluno. */

  int N1, N2, N3, N4, MD;

  cout << "Informe a primeira nota: " << endl;
  cin >> N1;

  cout << "Informe a segunda nota: " << endl;
  cin >> N2;

  cout << "Informe a terceira nota: " << endl;
  cin >> N3;

  cout << "Informe a quarta nota: " << endl;
  cin >> N4;

  MD = (N1 + N2 + N3 + N4) / 4;

  if(MD >= 50){
    cout << "Aprovado, Média obtida: " << MD << endl;
  } else {
    cout << "Reprovado, Média obtida: " << MD << endl; 
  }
  
  return 0;
}