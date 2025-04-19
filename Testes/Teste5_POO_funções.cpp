#include <iostream>
#include <string>
using namespace std;

// Programa para introduzir a mim mesmo o conceito de funções

using std::cout;
using std::cin;
using std::endl;



// se defini uma função semelhantemente como uma variável, isso defini o que se deve retonar.
void Mensagem(string Pais){

    cout << "Hello World " << Pais << endl;

}

int Mensagem(int anos) {

    cout << "Sua idade é " << anos << "Você é velho" << endl; 

    return 0;
}

int main()
{

    Mensagem("Brasil");
    Mensagem(38);

    return 0;

}
