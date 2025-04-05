#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    int cents{};
    std::cout << "Entre a quantidade de cents: ";
    std::cin >> cents;

    int dollar{};
    int quarter{};
    int dime{};
    int nickel{};
    int penny{};

    if (cents >= 100)
    {
        dollar = cents / 100;
        cents %= 100;
    }

    if (cents >= 25)
    {
        quarter = cents / 25;
        cents %= 25;
    }

    if (cents >= 10)
    {
        dime = cents / 10;
        cents %= 10;
    }

    if (cents >= 5)
    {
        nickel = cents / 5;
        cents %= 5;
    }

    if (cents >= 1)
    {
        penny = cents / 1;
        cents %= 1;
    }

    std::cout << "Você pode trocar por:\n";
    std::cout << "dollars: " << dollar << "\n";
    std::cout << "quarter: " << quarter << "\n";
    std::cout << "dime: " << dime << "\n";
    std::cout << "nickel: " << nickel << "\n";
    std::cout << "penny: " << penny << "\n";

    return 0;
}
