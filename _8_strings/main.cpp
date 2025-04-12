#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    return 0;
}

/*
 * funções de characteres:
 * <cctype>
 * - funções para teste e conversão:
 * - função de teste:
 *   - isalpha
 *   - isalnum
 *   - isdigit
 *   - islower
 *   - isprint
 *   - ispunct
 *   - isupper
 *   - isspace
 *
 * - funções de conversão
 *   - tolower
 *   - toupper
 *
 * texto estido em C:
 * - sequencia de characteres continuo na memória
 * - arranjo de characteres
 * - terminado por null
 *
 * char name[] {"Gabriel"};
 * char name[20] {"Gabriel"}; -> Os espaços restantes vão terminar com \0
 * - Trabalhar com strings no estilo C, ou é usado funções auxiliares que já existem,
 *   ou você faz na mão como se você estivesse usando um arranjo qualquer
 *
 * size_t -> tipo retorno do strlen;
 *
 * C++ strings:
 * <string>
 * - std namespace
 * - armazenada contidua na memoria
 * - tamanho dinamico
 * - funções já prontas para se trabalhar
 * - da para usar os operadores (+,=,<,>,<=,>=,==...)
 *   -> Esses operadores não funcionam muito bem com o estilo em C
 * - mais seguro
 * - já começa inicializada
 *
 * string s1 <- Vazio
 */
