#include <iostream>
using namespace std;

int main() {

  /* Ler os valores de quatro notas escolares bimestrais de um aluno
representadas pelas pelas variáveis N1, N2, N3 e N4. calcular a média aritmética
(variável MD1) desse aluno e apresentar a mensagem "Aprovado se a média obtida
for maior ou igual a 7; caso contrário, o programa deve solicitar a quinta
nota(nota de exame, representada pela variável NE) do aluno e calcular uma nova
média aritmética (variável MD2) entre a nota de exame e a primeira média
aritmética Se o valor da nova média for maior ou igual a cinco, apresentar a
mensagem "Aprovado em exame"; caso contrário, apresentar a mensagem "Reprovado".
Informar também, após a apresentação das mensagens, o valor da média obtida pelo
aluno. */

  int N1, N2, N3, N4, NE, MD1, MD2;

  cout << "Informe a primeira nota: " << endl;
  cin >> N1;

  cout << "Informe a segunda nota: " << endl;
  cin >> N2;

  cout << "Informe a terceira nota: " << endl;
  cin >> N3;

  cout << "Informe a quarta nota: " << endl;
  cin >> N4;

  MD1 = (N1 + N2 + N3 + N4) / 4;

  if (MD1 >= 70) {
    cout << "Aprovado, Média do aluno: " << MD1 << endl;
  } else {
    cout << "Informe a quinta nota: " << endl;
    cin >> NE;

    MD2 = (N1 + N2 + N3 + N4 + NE) / 5;

    if (MD2 >= 50) {
      cout << "Aprovado em exame, Média do aluno: " << MD2 << endl;
    } else {
      cout << "Reprovado em exame, Média do aluno: " << MD2 << endl;
    }
  }

  return 0;
}