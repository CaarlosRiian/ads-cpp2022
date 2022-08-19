#include <iostream>
#include <math.h>
using namespace std;

int main(){ // Verificar a resposta dessa questão!

  /*
  Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera. Utilize a fórmula VOLUME ← (4 / 3) * 3.14159 * (RAIO ↑ 3).
*/ 

  float volume, raio;

  cout << "Informe o valor do raio: " << endl;
  cin >> raio;

  volume = (4 / 3) * 3.14159 * pow(raio,3);

  cout << "O valor de uma esfera é de: " << volume << endl;

  
  
  return 0;
}