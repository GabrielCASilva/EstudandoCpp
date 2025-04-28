#include "MyString.hpp"
#include <iostream>
#include <utility>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela
    MyString empty;
    MyString overload{"overload"};
    MyString deepCopy{overload};
    MyString deepCopy2 = overload;

    MyString move = std::move(MyString{"Teste"});
    MyString move2{std::move(MyString{"Teste"})};

    empty = move;
    empty = std::move(move);

    bool equality = move2 == empty;

    std::cout << overload.get_str() << "\n";
    +overload;
    std::cout << overload.get_str() << "\n";

    MyString user_input;
    std::cin >> user_input;
    std::cout << user_input << "\n";

    return 0;
}
