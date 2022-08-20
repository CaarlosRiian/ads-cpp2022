#include <iostream>
using namespace std;

int main(){

  /* Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D. Apresentar apenas os valores que sejam divisiveis por 2 e 3. */

  int A, B, C, D;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor B: " << endl;
  cin >> B;

  cout << "Informe o valor de C: " << endl;
  cin >> C;

  cout << "Informe o valor de D: " << endl;
  cin >> D;

 if((A % 2 == 0) && (A % 3 == 0)){
   cout << "O Número"  << A << " é divisivel por 2 e 3." << endl;
 }
  if((B % 2 == 0) && (B % 3 == 0)){
    cout << "O Número " << B << " é divisivel por 2 e 3." << endl;
  }
  if((C % 2 == 0) && (C % 3 == 0)){
    cout << "O Número " << C << " é divisivel por 2 e 3." << endl;
  }
  if((D % 2 == 0) && (D % 3 == 0)){
    cout << "O Número " << D << " é divisivel por 2 e 3." << endl;
  }
  return 0;
}