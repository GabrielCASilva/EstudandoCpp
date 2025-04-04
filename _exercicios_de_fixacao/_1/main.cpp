#include <format>
#include <iostream>

/*
 * Conversor de real em dolar e vice versa.
 * Objetivo:
 * - Fazer um conversor de moeda perguntando para o usuário:
 *   Qual tipo de moeda ele vai ultilizar
 *   O quanto ele quer converter
 * - Mostrar o resultado convertido
 */

namespace cotacao
{
constexpr float DOLAR_REAL{0.1776F};
constexpr float REAL_DOLAR{5.630F};
} // namespace cotacao

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    float moeda{0};
    int tipo{0};
    std::cout << "Qual tipo de conversão deseja fazer?\n";
    std::cout << "1 - real para dolar\n";
    std::cout << "2 - dolar para real\n";
    std::cin >> tipo;

    if (tipo != 1 && tipo != 2)
    {
        std::cout << "Tipo de conversão inválido\n";
        return 1;
    }

    std::cout << "Digite o valor que deseja converter: ";
    std::cin >> moeda;

    switch (tipo)
    {
    case 1:
        moeda *= cotacao::DOLAR_REAL;
        break;
    case 2:
        moeda *= cotacao::REAL_DOLAR;
        break;
    default:
        break;
    }

    std::cout << std::format("O valor convertido é de: {:.2f}\n", moeda);

    return 0;
}
