#include <iostream>
// LeGarin 08/01/2025
//Tem o intuito de apresentar os principais operadores aritméticos

using std::cout;
using std::cin;     //Permite o uso sem std::
using std::endl;



int main()
{
    int Numero1, Numero2;

    cout << "Digite o número 1:", cin >> Numero1;
    cout << "Digite o número 2:", cin >> Numero2;

    cout << "O resultado é " << Numero1 + Numero2 << " Soma" << endl;
    cout << "O resultado é " << Numero1 - Numero2 << " Diferença" << endl;
    cout << "O resultado é " << Numero1 * Numero2 << " Produto" << endl;
    cout << "O resultado é " << Numero1 / Numero2 << " Quociente" << endl;
    cout << "O resultado é " << Numero1 % Numero2 << " Resto" << endl;

    cout << "O resultado é " << (Numero1 + Numero2 + 6) * 5 / 3 - 5 << " Expressão numerica" << endl;
    // As expressões númericas aqui seguem o mesmo padrão na matemática, na ordem da esquerda para direita.
    return 0;

}

