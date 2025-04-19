#include <iostream>
#include <string>

#include "Projeto_Basico2.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

Lista_de_alunos :: Lista_de_alunos(string nome_p) : nome(nome_p) {}

void Lista_de_alunos :: Visualizar_nome() {

    cout << "O nome do aluno a ser adicionado é " << nome << "\n";


}

void Lista_de_alunos :: Verificacao() {

    if (nome.length() <= 25) {

        cout << "Esse nome se adequa a norma de tamanho padrão\n";

    }

    if (nome.length() > 25) {

        cout << "Esse nome não se adequa a norma de tamanho padrão\n";

        nome = nome.substr(0, 25);

        cout << "Use esse: " << nome << " ou faça uma abreviação\n";

    }



}
