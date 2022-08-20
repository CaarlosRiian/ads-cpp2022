#include <iostream>
using namespace std;

int main() {

  /* Ler cinco valores numéricos inteiros (variáveis A, B, C, D e E),
   * identificar e apresentar o maior e o menor informados. */

  int A, B, C, D, E, maior, menor;

  cout << "Informe o valor de A: " << endl;
  cin >> A;

  cout << "Informe o valor de B: " << endl;
  cin >> B;

  cout << "Informe o valor de C: " << endl;
  cin >> C;

  cout << "Informe o valor de D: " << endl;
  cin >> D;

  cout << "Informe o valor de E: " << endl;
  cin >> E;

  // Condições que Verifica o número menor.
  if((A < B) && (A < C) && (A < D) && (A < E)){
    menor = A;
  } 
    if((B < A) && (B < C) && (B < D) && (B < E)){
      menor = B;
    } 
      if((C < A) && (C < B) && (C < D) && (C < E)){
        menor = C;
      } 
        if((D < A) && (D < B) && (D < C) && (D < E)){
          menor = D;
        } 
          if((E < A) && (E < B) && (E < C) && (E < D)){
            menor = E;
          }
        
  // Condições que verifica o número maior.
  if((A > B) && (A > C) && (A > D) && (A > E)){
    maior = A;
  } 
    if((B > A) && (B > C) && (B > D) && (B > E)){
      maior = B;
    } 
      if((C > A) && (C > B) && (C > D) && (C > E)){
        maior = C;
      } 
        if((D > A) && (D > B) && (D > C) && (D > E)){
          maior = D;
        } 
          if((E > A) && (E > B) && (E > C) && (E > D)){
            maior = E;
          }
       
  cout << "O Número maior: " << maior << endl;
  cout << "O Número menor: " << menor << endl;

    return 0;
}