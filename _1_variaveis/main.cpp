#include <iostream>

int exemplo{0}; // variavel global

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    int idade{0}; // variável com escopo local a função main
    std::cout << "Entre sua idade na tela: ";
    std::cin >> idade;

    std::cout << "Sua idade é de " << idade << "\n";

    return 0;
}

/*
 * Variaveis:
 * - Abstração para um local na memória
 * <tipo> <nome da variavel>
 * int idade; -> variavel declarada
 * idade = 18;
 *
 * - Regras:
 *   - não pode começar com números
 *   - não pode usar characters especiais e espaços
 *   - não pode usar palavras reservadas
 *   - C++ é sensivel ao tamanho da letra
 *
 * - Inicialicações:
 *   - int idade = 21;
 *   - int idade (21); -> inicialização de construtor
 *   - int idade {21}; -> inicialização de chaves (RECOMENDADO)
 *
 * - Variáveis globais:
 *   - variáveis que são declaradas fora de algum escopo
 *   - variáveis locais são de uso preferencial
 */
