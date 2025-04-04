#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    int test_scores[2]{0};

    return 0;
}

/*
 * Arrays ( Arranjos ):
 * - Um tipo de dado composto por outros tipos de dados
 *   Ex: Uma coleção de notas de provas
 * - Todos os elememtos tem de ser do mesmo tipo
 * - Cada elemento pode ser acessado diretamente
 *
 * - Caracteristicas:
 *   - Tamanho fíxo
 *   - Elementos sempre do mesmo tipo
 *   - Armazenamento de maneira continua na memória
 *   - Elementos acessados por um indice próprio
 *   - A contagem dos indices começa da posição 0
 * - Sintax:
 *   <tipo> <nome> <tamanho>
 *   int arranjo [8];
 *
 * - Maneiras de inicialização:
 *   int arranjo [5] {1, 2, 3, 4, 5};
 *   int arranjo [5] {5}; -> primeiro elemento com 5 e 0 para o resto
 *   int arranjo [5] {0}; -> todas as posições iniciadas com 0
 *   int arranjo [] {1, 2, 3, 4, 5}; -> tamanho calculado automaticamente
 *
 * Arrays de duas dimenções:
 * - int arranjo [4][4];
 * - Inicialização:
 *  - int movie_rating [2][2]
 *    {
 *        {1,2},
 *        {2,3}
 *    };
 */
