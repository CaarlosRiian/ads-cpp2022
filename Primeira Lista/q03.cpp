#include <iostream>
using namespace std;

int main() {

  /* Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
   * Fahrenheit. A fórmula de conversão é F ← C * 9 / 5 + 32, sendo F a
   * temperatura em Fahrenheit e C a temperatura em Celsius. */

  float C, F;

  // Programa que pede ao usuário informar um valor em graus Celsius e salva na variavel.
  cout << "Informe uma temperatura em graus Celsius: " << endl;
  cin >> C;

  // Programa que converte a temperatura de Celsius para Fahrenheit.
  F = C * 9 / 5 + 32;

  cout << "A temperatura convertida em Fahrenheit: " << F << "ºF";

  return 0;
}