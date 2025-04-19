#include "Teste11_POO.h"
#include "iostream"

using std::cout;

// O construtor começa com valor 0
Animais :: Animais(string acao_p, string nome_p, string estatus_p) : acao(acao_p), nome(nome_p), estatus(estatus_p) {}

// Define o valor
void Animais::Reconhecimento () {
    
    cout << "A ação é " << acao << "\nO nome é" << nome << "\nO estatus é " << estatus << "\n";

}

