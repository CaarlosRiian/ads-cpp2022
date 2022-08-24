#include <iostream>
using namespace std;

int main() {

  /* Elaborar um programa que apresente os valores de conversão de graus Celsius
em graus Fahrenheit, de dez em dez graus, iniciando a contagem em dez graus
Celsius e finalizando em cem graus Celsius. O programa deve apresentar os
valores das duas temperaturas. */

  float F, C;

  for (int i = 10; i <= 100; i++){
    if(i % 10 == 0){
      C = i;
      F = (C * 9 / 5) + 32;
      cout << F << "ºF" << endl;
    }
  }

  return 0;
}