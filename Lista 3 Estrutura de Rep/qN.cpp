#include <iostream>

using namespace std;

/* Elaborar um programa que leia dez valores numéricos reais e apresente no
final o somatório e a média dos valores lidos. */

int main(){
    
    int x, media = 0, num = 0, cont = 0;
    float soma = 0;
    
    while(num >= 0){
        cout << "Informe um valor: " << endl;
        cin >> num;
        if(num > 0){
           soma += num;
           cont += 1;
        }
    }
    
    cout << "A soma é: " << soma << endl;
    cout << "A media é: " << (soma / cont) << endl;
    
    return 0;
}
