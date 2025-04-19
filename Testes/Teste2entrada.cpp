#include <iostream>

//Programa para testar a entrada e os caracteres de operações matemáticas.
// LeGarin, 07/01/2025

int main()
{
    int Numero1, Numero2; // Criando uma váriavel, com caracteres comum que armazenam números inteiros
                                // , é usado como meio de criar várias variáveis mais de uma vez.

    std::cout << "Digite o número 1:", std::cin >> Numero1;

                        // >> é usado como recurso de extrator de fluxo, semelhante como <<, so muda a direção.

     // cin é usado para meio de entrada 

    std::cout << "Digite o número 2:", std::cin >> Numero2;

    //cin só funciona para caracteres presentes antes de um espaço e é mais eficiente para o uso de inteiros.

    // = é usado para atribuir resultados de operações aritméticas e + tem a mesma função do que na matemática.

    std::cout << "Sua soma é " << Numero1 + Numero2 << std::endl; // std::endl; termina a linha e mostra a linha mais rápido.
    //  operações de inserção de fluxo de concatenação, quandos se usa vários operadores de inserção de fluxo <<
    return 0;



}