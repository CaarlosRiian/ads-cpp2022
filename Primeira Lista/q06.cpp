#include <iostream>
using namespace std;

int main(){

  /* Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA. */ 

  int volume, comprimento, altura, largura;

  cout << "Informe o comprimento da caixa: " << endl;
  cin >> comprimento;
  
  cout << "Informe a largura da caixa: " << endl;
  cin >> largura;
  
  cout << "Informe a altura da caixa: " << endl;
  cin >> altura;

  volume = comprimento * largura * altura;

  cout << "O valor do volume da caixa retangular é de: " << volume << endl;
  
  return 0;
}