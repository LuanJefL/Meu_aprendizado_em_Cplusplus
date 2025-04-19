#include <iostream>
#include <string>

// Programa para tentar compreender o armazenamento de strings em váriaveis e alguns recursos de POO.

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Carro {
public:

    string Modelo = "BMW", Condicao = "Novo";

    Carro(string Modelo_i, string Condicao_i ) : Modelo(Modelo_i), Condicao(Condicao_i) {} //Faz com que os atributos da classe sejam definidos antes do início da função.

    virtual ~Carro() {} //O destrutor tira a classe da memória quando ele sai do escopo da execução.

    void Reconhecimento() {

        cout << "Modelo:" << Modelo << "\nCondição:" << Condicao << "\n\n";


    }

};

class Carro_2 : public Carro {
public:

   Carro_2(string Modelo_i, string Condicao_i) : Carro(Modelo_i, Condicao_i) {} // Ao usar um construtor com parâmetro, tem que redefinir quando uma classe herdar.

    ~Carro_2() {}

};




int main() {

    Carro Carro_obj("Ferrari", "Usado");
    Carro_2 Carro_2_obj("Chevete", "Novo");
    Carro_obj.Reconhecimento();
    Carro_2_obj.Reconhecimento();

    return 0;

}