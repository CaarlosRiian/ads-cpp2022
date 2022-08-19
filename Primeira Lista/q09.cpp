#include <iostream>
using namespace std;

int main(){

  /* Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores. */

  int eleitores, votbrancos, votnulo, votval;

  cout << "Informe o número de eleitores: " << endl;
  cin >> eleitores;

  cout << "Informe o número de votos em branco: " << endl;
  cin >> votbrancos;

  cout << "Informe o número de votos nulos: " << endl;
  cin >> votnulo;

  cout << "Informe o número de votos validos: " << endl;
  cin >> votval;

  cout << "O percentual de votos brancos e de: " << (votbrancos*100) / eleitores << " %" << endl;
  cout << "O percentual de votos nulos e de: " << (votnulo*100) / eleitores << " %" << endl;
  cout << "O percentual de votos validos e de: " << (votval*100) / eleitores << " %"<< endl;

  
  
  return 0;
}