#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela
    std::string user_msg{};
    std::getline(std::cin, user_msg);

    int k{0};
    int sign{1};
    int size_ref = user_msg.size() - 1;
    for (int i{0}; i < user_msg.size(); ++i)
    {
        for (int l{size_ref}; l > 0; --l)
        {
            std::cout << ' ';
        }
        for (int j{0}; j >= 0;)
        {

            std::cout << user_msg.at(j);
            if (j == k)
            {
                sign = -1;
            }
            j += 1 * sign;
        }
        std::cout << "\n";
        --size_ref;
        sign = 1;
        ++k;
    }

    return 0;
}
