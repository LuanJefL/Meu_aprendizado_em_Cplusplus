#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Numero1, Numero2;

    cout << "Digite os números", cin >> Numero1 >> Numero2;

    if (Numero1 == Numero2)
        cout << "O número é igual" << endl;

    if (Numero1 != Numero2)
        cout << "O número é diferente" << endl;

    if (Numero1 < Numero2)
        cout << "O número é menor" << endl;

    if (Numero1 <= Numero2)
        cout << "O número é menor ou igual" << endl;

    if (Numero1 > Numero2)
        cout << "O número é maior" << endl;

    if (Numero1 >= Numero2)
        cout << "O número é maior ou igual" << endl;

    return 0;


}