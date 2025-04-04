#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    std::vector<int> vetor{1, 2, 3, 4, 5};

    std::cout << vetor.at(1) << "\n"; // valor no indice 1

    vetor.push_back(10); // adiciona o elemento no fundo o vetor

    std::cout << vetor.at(10)
              << "\n"; // isso vai dar um erro porque foi tentado acessar um valor fora dos limites do arranjo

    vetor.at(2) = 100; // a alteração também pode ser feita assim

    return 0;
}

/*
 * Vetores (vectors):
 * - Parte da biblioteca padrao do c++
 * - Vetores podem crescer e diminuir em tamanho
 * - Parecidos com arrays
 * - Tem funções de manipulação
 *
 * - Sintax:
 *   std::vector <int> vetor;
 *   - O vetor pode ser de qualquer tipo, mas sempre do mesmo tipo
 *
 *   std::vector <int> vetor (10); // inicializador de construtor
 *    -> todos os 10 espaços são iniciados com 0
 *
 *   std::vector <int> vetor (10, 80); -> 10 é o tamanho, 80 é o valor do primeiro indice
 */
