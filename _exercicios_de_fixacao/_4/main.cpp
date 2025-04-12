#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela

    std::string referencia{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-=_+{}[]()|/.,><"};
    std::string criptografia{
        ">z_hHv8X+@EP1AW4^)Jr=7.%Rl6wbu0,LiOjNkDafB]F[Q)*s(xT&5KYgnVZ|ecM23y9C}/{-#md<$SItpqo(GU!"};

    std::cout << "Digite uma mensagem para ser encriptada:\n";

    std::string mensagem;
    std::getline(std::cin, mensagem);

    std::cout << "\n";
    std::cout << "Encriptando mensagem...\n\n";

    std::string mensagem_encriptada{};
    for (auto letra : mensagem)
    {
        for (size_t i{0}; i < referencia.size(); ++i)
        {
            if (letra == referencia.at(i))
            {
                mensagem_encriptada += criptografia.at(i);
                break;
            }

            if (i == referencia.size() - 1)
            {
                mensagem_encriptada += letra;
            }
        }
    }

    std::cout << "Mesagem escriptada: ";
    std::cout << mensagem_encriptada << "\n\n";

    std::cout << "Decriptando mensagem...\n\n";

    std::string mensagem_descriptada{};
    for (auto letra : mensagem_encriptada)
    {
        for (size_t i{0}; i < criptografia.size(); ++i)
        {
            if (letra == criptografia.at(i))
            {
                mensagem_descriptada += referencia.at(i);
                break;
            }

            if (i == referencia.size() - 1)
            {
                mensagem_descriptada += letra;
            }
        }
    }

    std::cout << "Mesagem descriptada: ";
    std::cout << mensagem_descriptada << "\n";
    return 0;
}
