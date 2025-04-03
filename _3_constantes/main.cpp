#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    const int idade{20}; // variável com escopo local a função main
    std::cout << "A idade informada pela constante é de " << idade << "\n";

    return 0;
}

/*
 * Constantes:
 * - Abstração para um local na memória que não pode ser alterado
 *   Tipos:
 *    - Constantes literais
 *      - x = 10; -> o 10 é uma constante literal
 *      - 10
 *      - 10U
 *      - 10L
 *      - 10LL
 *
 *      - 10.1F
 *
 *      - Letras literais:
 *        - \n
 *        - \r
 *
 *    - Constantes declarativas
 *      - const palavra; -> "palavra" é declarada como uma constante
 *    - Expressões constantes
 *      - constexpr palavra;
 *    - Constantes Enumerativas
 *      - enum palavra;
 *    - Constantes definidas
 *      - #define palavra; -> Diretiva de pré-processador, usado mais em codígo legado
 *        -> evitar usar em C++ moderno
 */
