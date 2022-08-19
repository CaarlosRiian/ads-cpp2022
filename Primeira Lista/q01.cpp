#include <iostream>
using namespace std;

int main() {

  /* Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o
   * seu antecessor.*/

  int valor;

  // Programa que pede ao usuario para informar um valor e salvar em uma
  // variavel.
  cout << "Informe um valor: " << endl;
  cin >> valor;

  // Programa que informa o número antecessor do informado.
  cout << "O antecessor do valor informado é: " << valor - 1 << endl;

  return 0;
}