#include <iostream>
using namespace std;

int main(){

  /* Escrever um aplicativo que possa armazenar o nome, as duas notas e a média dos alunos de uma turma. O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno
2 - Consultar dados de aluno 3 - Alterar dados de aluno 4 - Consultar média da turma 5 - Sair Opção: */

  int menu = 0, aux = 0;
  string alunos[5], consulta, opcao;
  int notas1[5], notas2[5];
  float media[5], mediaturma;

  while(menu == 0){
    cout << "Qual opção você deseja?" << endl;
  cout << "[1] Cadastrar aluno \n[2] Consultar dados de aluno \n[3] Alterar dados de aluno \n[4] Consultar média da turma \n[5] Sair" << endl;
  cin >> menu;

    while(menu == 1){
      cout << "Informe o nome do aluno: " << endl;
      cin >> alunos[aux];
      cout << "Informe a primeira nota do aluno: " << endl;
      cin >> notas1[aux];
      cout << "Informe a segunda nota do aluno: " << endl;
      cin >> notas2[aux];
      media[aux] = ((notas1[aux] + notas2[aux]) / 2);
      cout << "Média do: " << alunos[aux] << " é de: " << media[aux] << endl;
      cout << "\n";
      aux++;
      menu = 0;
    }

    while(menu == 2){
      cout << "Qual aluno deseja consultar?" << endl;
      cin >> consulta;
      for(int i = 0; i < 5; i++){
        if(alunos[i] == consulta){
          cout << "Aluno: " << i + 1 << ": " << alunos[i] << "\nNota 1: " << notas1[i] << ",\nNota 2: " << notas2[i] << "\nMédia: " << media[i] << endl;
        }
      }
       menu = 0;
    }

    while(menu == 3){
      cout << "Qual aluno você deseja alterar dados? " << endl;
      cin >> consulta;
      for(int i = 0; i < 5; i++){
        if(alunos[i] == consulta){

          cout << "Aluno " << i + 1 << ": " << alunos[i] << "\nNota 1: " << notas1[i] << ",\nNota 2: " << notas2[i] << ",\nMédia: " << media[i] << endl;
        cout << "Qual dado você deseja alterar?\n" << "Nome\nNotas 1\nNotas 2";
          cin >> opcao;
    while(opcao == "Nome"){
            cout << "Nome do aluno: ";
            cin >> alunos[i];
            break;  
        }
    while(opcao == "Notas 1"){
            cout << "Nota 1 do aluno: ";
            cin >> notas1[i];
            media[i] = ((notas1[i] + notas2[i]) / 2);
            break;
        }
    while(opcao == "Notas 2"){
            cout << "Nota 2 do aluno: ";
            cin >> notas2[i];
            media[i] = ((notas1[i] + notas2[i]) / 2);
            break;
           }    
          }
        }
         menu = 0;
      }

    while(menu == 4){
      for(int i = 0; i < 5; i++){
        if(media[i] != 0){
          mediaturma += media[i];
        }
      }
      mediaturma = mediaturma / 5;
      cout << "A média da turma é de: " << mediaturma << endl;
      menu = 0;
    }

    if(menu == 5){
      cout << "Programa finalizado!" << endl;
      break;
    }
         }
        
  return 0;
}