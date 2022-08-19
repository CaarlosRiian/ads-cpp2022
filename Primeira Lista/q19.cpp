#include <iostream>
using namespace std;

int main() {

  /* Construir um programa que calcule, armazene e apresente em metros por
   * segundo o valor da velocidade de um projétil que percorre uma distância em
   * quilômetros a um espaço de tempo em minutos. Utilize a fórmula VELOCIDADE ←
   * (DISTÂNCIA * 1000) / (TEMPO * 60). */

  int velocidade, distancia, tempo;

  cout << "Informe a distancia do projectil: " << endl;
  cin >> distancia;

  cout << "Informe quanto tempo o projectil gastou: " << endl;
  cin >> tempo;

  velocidade = (distancia * 1000) / (tempo * 60);

  cout << "A velocidade do projectil foi de: " << velocidade << endl;

  return 0;
}