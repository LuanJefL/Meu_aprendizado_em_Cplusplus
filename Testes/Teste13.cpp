#include <iostream>
#include <conio.h> // Para _getch()
#include <stdlib.h> // Para system()
#include <vector> 
//_getch();
//77 direita
//75 esquerda
//72 para cima
//80 para baixo
//13 enter 
//char Definir como armazenador de bytes

//Programa para testar a produção de menus 

using namespace std; //Para permitir o uso de endl;
using std::cout;
using std::vector; 

int main() {
   
    vector<int> opcao_lista = {0, 0};                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    char ch;

    while(true) {

        system("cls");

        if (opcao_lista[0] == 0 && opcao_lista[1] == 0) {
            cout << ">Opção 1             Opção 5" << endl;
        }
        else if (opcao_lista[0] == 0 && opcao_lista[1] == 1) {
            cout << "Opção 1             >Opção 5" << endl;
        }
        else {
            cout << "Opção 1             Opção 5" << endl;
        }

        if (opcao_lista[0] == 1 && opcao_lista[1] == 0) {
            cout << ">Opção 2             Opção 6" << endl;
        }
        else if (opcao_lista[0] == 1 && opcao_lista[1] == 1) {
            cout << "Opção 2             >Opção 6" << endl;
        }
        else {
            cout << "Opção 2             Opção 6" << endl;
        }

        if (opcao_lista[0] == 2 && opcao_lista[1] == 0) {
            cout << ">Opção 3             Opção 7" << endl;
        }
        else if (opcao_lista[0] == 2 && opcao_lista[1] == 1) {
            cout << "Opção 3             >Opção 7" << endl;
        }
        else {
            cout << "Opção 3             Opção 7" << endl;
        }

        if (opcao_lista[0] == 3 && opcao_lista[1] == 0) {
            cout << ">Opção 4             Opção 8" << endl;
        }
        else if (opcao_lista[0] == 3 && opcao_lista[1] == 1) {
            cout << "Opção 4             >Opção 8" << endl;
        }
        else {
            cout << "Opção 4             Opção 8" << endl;
        }


       





        ch = _getch();

        if (ch == 72) {
            opcao_lista[0] = (opcao_lista[0] - 1 + 4) % 4;
        }
        else if (ch == 80) {
            opcao_lista[0] = (opcao_lista[0] + 1) % 4;
        }
        else if (ch == 75) {
            opcao_lista[1] = (opcao_lista[1] - 1 + 2) % 2;
        }
        else if (ch == 77) {
            opcao_lista[1] = (opcao_lista[1] + 1) % 2;
        }

        if (ch == 13) {
            system("cls");
            cout << "Opção escolhida:" << (opcao_lista[1] * 4) + (opcao_lista[0] + 1) << endl;
            break;
        }
        

    }





    return 0;
}
