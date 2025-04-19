#include <iostream>

//Programa que simula um ATM 
// LeGarin 08/01/2025

using std::cout;
using std::cin;
using std::endl;

int main()
{

    int Usuario, pin = 29837 , pin_fornecido, opcoes = 0, saldo = 1299, valor_de_mudanca = 0;
    

    cout << "Olá, qual o usuário?\nDigite o código de identificação:", cin >> Usuario;

    if (Usuario == 28392) {
        cout << "\nBem-vindo\n\nDigite seu número de indentificação de 5 dígitos:", cin >> pin_fornecido;

        if (pin == pin_fornecido) {
            cout << "\nBem-vindo fulano, o que deseja? \n1.Consultar saldo \t2.Retirada \n3.Depósito \t4.Sair\n:", cin >> opcoes;

            if (opcoes == 1) {
                cout << "Seu saldo é:" << saldo << "\nFim da operação"; }
            if (opcoes == 2) {
                cout << "Quanto deseja retirar?\n:", cin >> valor_de_mudanca;
                saldo -= valor_de_mudanca;
                valor_de_mudanca = 0;
                cout << "Seu saldo agora é de:" << saldo << " Reais\nFim da operação" << endl; }
            if (opcoes == 3) {
                cout << "Quanto você deseja depositar?\n:", cin >> valor_de_mudanca;
                saldo += valor_de_mudanca;
                valor_de_mudanca = 0; 
                cout << "Seu saldo agora é de:" << saldo << "\nFim da operação";}
            if (opcoes == 4) {
                cout << "Entendido, até mais!"; }
        }


        if (pin != pin_fornecido)
            cout << "Senha de 5 dígitos inválida, tente novamente";
    }

    if (Usuario != 28392) 
        cout << "Esse Usuário não existe, tente novamente"; 
        




    return 0;
}
