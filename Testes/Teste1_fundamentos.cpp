#include <iostream> //Permite que o programa gere saída de dados na tela, #include prepara o código antes da compilação.

// Made for LeGarin 01/07/25

//A função main inicia a execução do programa 
int main()
{
                                
                                // Os caracteres << são referidos como operadores de inserção de fluxo, ele diz qual valor dever ser inserido.
    std::cout << "Hello World\n"; //Exibe a messagem, todo código precisa terminar com ;
                                // o caractere \ é um caractere de escape, indica que um caractere especial deve ser enviando para a posição de encontro.
                                //Quando combinado com um caractere espeçifico forma uma sequência de escape, que tem uma função específica, tipo \n que pula uma linha.
    std::cout << "Idade\tNome\n";
                                // \t significa tabulação horizontal
    std::cout << "Sem\\Com\n"; // \\ permite o uso de barra invertida, a mesma coisa para , ' e "

    std::cout << "Vida\rDifícil\n"; // \r indica o inicio do cursor

    std::cout << "Sem\bvontade"; // Esse comando apaga caracteres antes dele, mas no ambiente que estou não funciona, Vs Code.
    
    std::cout << "\a"; //Gera um som, mas no meu meio não gera.

    return 0; //Indica que o pragama acabou com sucesso, uma das diversas maneiras de sair de uma função

} //Fim da função main