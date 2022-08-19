#include <iostream>
using namespace std;

int main(){ // Praticar mais essa questão!

  /* Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. */

  int nota1, nota2, nota3, media, mediaF;

  cout << "Informe a primeira nota: " << endl;
  cin >> nota1;

  cout << "Informe a segunda nota: " << endl;
  cin >> nota2;

  cout << "Informe a terceira nota: " << endl;
  cin >> nota3;

  media = (nota1 * 2) + (nota2 * 3) + (nota3 * 5);
  mediaF = media / 10;

  cout << "A média ponderada do Aluno é: " << mediaF;

  
  return 0;
}