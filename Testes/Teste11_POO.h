#pragma once
#include <string>
using std::string;

class Animais {
public:

    Animais(string acao_p, string nome_p, string estatus_p);
    void Reconhecimento();

private:

    string acao, nome, estatus;

};

