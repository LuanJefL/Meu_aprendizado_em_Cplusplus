#include <iostream>
#include <string>


//Programa para expôr todos os recursos de uma classe

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Animal {
public:

    string Tipo = "Indefinifo", Acao = "Indefinifo";

    Animal(string Tipo_p, string Acao_p) : Tipo(Tipo_p), Acao(Acao_p) {}

    void Reconhecimento() {

        cout << "Tipo:" << Tipo << "\nAção:" << Acao << "\n"; 

    }

    virtual ~Animal() {} //Deve se usar virtual porque ainda se vai usar em uma classe herdada 


};

class Gato : public Animal {
public:

    Gato(string Tipo_p, string Acao_p) : Animal(Tipo_p, Acao_p) {}

    void Reconhecimento() {

        cout << "Tipo:" << Tipo << "\nAção:" << Acao << "\n"; 

    }

    ~Gato() {}


};


int main() {


    Animal Animal_obj("Indefinido", "Indefinido");
    Gato Gato_obj("Gato", "Miar");
    Animal_obj.Reconhecimento();
    Gato_obj.Reconhecimento();


    return 0;

}