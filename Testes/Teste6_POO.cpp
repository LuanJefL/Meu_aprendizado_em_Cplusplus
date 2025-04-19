#include <iostream>

// Programa para introdução dos conceitos básicos de POO

using std::cout;
using std::cin;
using std::endl;
                //Classes seguem uma sintaxe de sempre começarem com letras Maiúsculas, definir a disponibilidade dos recursos dentro 
class Estatus {
private:

    int Permissao_para_cheat = 0; //Ação chamada de encapsulamento, quando algo é privado é não pode ser alterado ou acessado ao executar.

public:
    
    int Saude = 100, Sede = 100, fome = 100, escolha; //Atributos 

    Estatus() {
        cout << "Ação realizada com sucesso";   //Construtor, parte que sempre executa

    }

    void Acoes(){

        cout << "Digite 1 se quiser tomar comida desitratada:", cin >> escolha; //Método da classe
        if (escolha == 1) {
            Sede -= 30;

        }

        cout << "Agora sua sede é de " << Sede;

    }

};

// herança, quando uma classe pega a outra como "inspiração", atráves de : public e o nome da outra classe a ser copiada
class Estatus2 : public Estatus { 
public:
    
    void Acoes() {

        cout << "\nA fome do jogador 2 é de:" <<  fome; //Polimorfismo, quando uma classe herdada muda a função-membro para outros a fim.

    }

};

int main()
{
    Estatus Estatus_obj;
    Estatus2 Estatus2_obj;
    cout << Estatus_obj.Saude << "\n";
    Estatus_obj.Acoes();
    Estatus2_obj.Acoes();


}