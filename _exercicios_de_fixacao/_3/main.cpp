#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela
    bool end_program{false};
    std::vector<int> vec{};
    do
    {
        char choice{};

        std::cout << "P - Print numbers\n";
        std::cout << "A - Add a number\n";
        std::cout << "M - Display mean of the numbers\n";
        std::cout << "S - Display the smallest number\n";
        std::cout << "L - Display the largest number\n";
        std::cout << "Q - Quit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 'P':
        case 'p':
            if (vec.empty())
            {
                std::cout << "[] - List is empty\n";
                break;
            }
            std::cout << "[ ";
            for (auto num : vec)
            {
                std::cout << num << " ";
            }
            std::cout << "]\n";
            break;

        case 'A':
        case 'a': {
            int num{};
            std::cout << "Enter a number: ";
            std::cin >> num;
            vec.push_back(num);
            std::cout << num << " added\n";
            break;
        }

        case 'M':
        case 'm': {
            if (vec.empty())
            {
                std::cout << "Unable to calculate the mean - no data\n";
                break;
            }
            float average{};
            for (auto num : vec)
            {
                average += num;
            }
            average /= vec.size();
            std::cout << average << "\n";
            break;
        }
        case 'S':
        case 's': {
            if (vec.empty())
            {
                std::cout << "Unable to show the smallest number - empty list\n";
                break;
            }
            int smallest{vec.at(0)};
            for (auto num : vec)
            {
                if (num < smallest)
                {
                    smallest = num;
                }
            }
            std::cout << smallest << "\n";
            break;
        }

        case 'L':
        case 'l': {
            if (vec.empty())
            {
                std::cout << "Unable to show the largest number - empty list\n";
                break;
            }
            int largest{vec.at(0)};
            for (auto num : vec)
            {
                if (num > largest)
                {
                    largest = num;
                }
            }
            std::cout << largest << "\n";
            break;
        }

        case 'Q':
        case 'q':
            std::cout << "Goodbye!\n";
            end_program = true;
            vec.clear();
            break;

        default:
            break;
        }

        std::cout << "\n";

    } while (!end_program);

    return 0;
}
