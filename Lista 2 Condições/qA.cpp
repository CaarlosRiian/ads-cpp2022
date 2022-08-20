#include <iostream>
using namespace std;

int main(){ 

  /* Efetuar a leitura de dois valores númericos inteiros representados pelas variaveis A e B e apresentar o resultado da diferença do maior pelo menor valor. */

  int A, B, diferenca;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  if(A > B){
    diferenca = A - B;
    cout << "A diferença entre os valores é de: " << diferenca << endl;
  } 
  if(B > A){
    diferenca = B - A;
    cout << "A diferença entre os valores é de: " << diferenca << endl;
  }
  
  
  return 0;
}