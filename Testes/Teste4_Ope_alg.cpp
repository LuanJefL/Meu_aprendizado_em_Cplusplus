#include <iostream>

//Programa para testar os operadores algébricos de comparação
//LeGarin 08/01/2025

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Numero1, Numero2;

    cout << "Quais os números para comparar:", cin >> Numero1 >> Numero2;
    

    cout << "Resultado da comparação de igualdade:" << (Numero1 == Numero2) << endl;
    cout << "Resultado da comparação de desigualdade:" << (Numero1 != Numero2) << endl;
    cout << "Resultado da comparação de menor:" << (Numero1 < Numero2) << endl;
    cout << "Resultado da comparação de menos ou igual:" << (Numero1 <= Numero2) << endl;   //Quando for fazer comparações use ()
    cout << "Resultado da comparação de maior:" << (Numero1 > Numero2) << endl;
    cout << "Resultado da comparação de maior ou igual:" << (Numero1 >= Numero2) << endl;
                                    //0 é falso
                                    //1 é verdade
    return 0;


}