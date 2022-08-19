#include <iostream>
using namespace std;

int main(){

  /* Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão é C ← ((F – 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

  float F, C;

    // Programa que pede ao usuário informar um valor em graus Fahrenheit e salva na variavel.
  cout << "Informe a temperatura em Fahrenheit: " << endl; 
  cin >> F;

  // Programa que converte a temperatura de Fahrenheit para Celsius.
  C = ((F - 32) * 5) / 9;

  cout << "A temperatura convertida em graus Celsius é de: " << C << "°";

  return 0;
}