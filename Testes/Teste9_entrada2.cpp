#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Programa para testar getline

#include <string>


using std::string;
using std::getline;

int main() {
    string Nome, pet;
    int Idade;
    
    cout << "Qual o seu nome?\n:";
    getline(cin, Nome);  // Lê a linha inteira, incluindo espaços
    cout << "Então seu nome é " << Nome << "\n";

    cout << "Não escutei seu nome, tem como repetir?\n";
    getline(cin, Nome);  // Lê a linha inteira novamente
    cout << "aaa, então seu nome é " << Nome << "\n";

    cout << "E qual é sua idade?\n"; cin >> Idade;
    cin.ignore(); //Consome a quebra de linha depois de cin, possibilitanto o uso de getline
    cout << "Então você já tem essa idade?\n";
    cout << "Qual o nome de seu pet\n?";
    
    getline(cin, pet);
    cout << "Então o nome do seu pet é " << pet;

    return 0;
}
