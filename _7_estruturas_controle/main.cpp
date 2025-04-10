#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela
    return 0;
}

/*
 * if:
 *
 * if (num > 10)
 *  std::cout << num;
 *
 * - if block
 * if (num > 10)
 * {
 *    std::cout << num;
 * }
 *
 * if (num > 10)
 *  std::cout << num;
 * else
 *  std::cout << num2;
 *
 * - nested
 * if ()
 * {
 *   if()
 *     -
 *   else
 *     -
 * }
 *
 * --------------------------
 * switch case:
 *
 * switch() {
 *    case '1': std::cout << "a\n"; break;
 *    default: break;
 * }
 * - o valor do case precisa ser um numero ou uma literal
 *
 * -------------------------
 * operador condicional:
 * (cond) ? exp1 : exp2;
 *
 * -------------------------
 * for loop:
 * for(int i {0}, j {0}; i <= 5; ++i, ++j) {}
 *
 * -------------------------
 * range for loop:
 * for (auto temp: {1, 2})
 *    num += temp;
 *
 * for (auto c: "Gabriel")
 *    std::cout << c << "\n";
 *
 * int scores[] {10,20,30};
 * for (auto score: scores)
 *    std::cout << score << "\n";
 *
 * -------------------------
 * while loop:
 * while(i <= 5) {
 *  ++i;
 * }
 *
 * do while loop:
 * do {
 *   std::cout "mensagem\n";
 *   ++i;
 * } while (i < 10);
 * -------------------------
 * nested loops:
 * for (int i{0}; i < 5; ++i)
 *   for (int j{0}; j < 5; ++j)
 *
 */
