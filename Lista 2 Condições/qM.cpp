#include <iostream>
using namespace std;

int main(){

  /* Efetuar a leitura de um nome (variável NOME) e o sexo (variável SEXO) de uma pessoa e apresentar como saída uma das seguintes mensagens "Ilmo. SR" caso seja informado o sexo masculino (Utilizar como caractere M) ou "Ilma SRA" caso seja informado o sexo feminino (Utilizar como valor o caractere "F") Após a mensagem de saudação, apresentar o nome informado. O Programa deve, após a entra do sexo verificar primeiramente se o sexo fornecido é realmente válido, ou seja, se é igual a "M" ou a "F". Não sendo essa condição verdadeira, o programa deve apresentar a mensagem "Sexo informado inválido" */

  string nome;
  char sexo;

  cout << "Informe o seu nome: ";
  cin >> nome;

  cout << "Informe o seu sexo [M] ou [F]" << endl;
  cin >> sexo;

  if(sexo != 'M' && sexo != 'F'){
    cout << "Sexo informado inválido" << endl;
  }
  if(sexo == 'M'){
    cout << "Saudações Sr." << nome << endl;
  }
  if(sexo == 'F'){
    cout << "Saudações Sra." << nome << endl;
  }
  
  return 0;
}