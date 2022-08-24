#include <iostream>
using namespace std;

int main() {

  /* Elaborar um programa que leia dez valores numéricos reais e apresente no
final o somatório e a média dos valores lidos. */

  int somatorio = 0;
  float media;

  for (int i = 1; i <= 10; i++) {
    somatorio += i;
  }

  media = somatorio / 10;

  cout << "O valor da média: " << media << endl;

  return 0;
}