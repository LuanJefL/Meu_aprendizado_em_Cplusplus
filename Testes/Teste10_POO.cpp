#include <iostream>
using std::cout;
using std::cin;
using std::endl;
                    //Programa para tentar compreender o uso de arquivos com classes em outros
#include <string>

using std::string;
using std::getline;

#include "Teste8_POO_com.h"


int main() {

    Animal Animal_obj("Jeremias", "Fumar");
    Gato Gato_obj("Roberto", "Miar");
    Animal_obj.Reconhecimento();
    Gato_obj.Reconhecimento();

    return 0;
}


