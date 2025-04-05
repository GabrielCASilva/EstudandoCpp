#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "\033[2J\033[1;1H"; // limpa a tela
    return 0;
}

/*
 * Expressões:
 * - Sequencia de operadores e operandos que especifica a computação
 *   Ex:
 *    34 -> literal
 *    numero -> variavel
 *    2 * 5 -> multiplicação
 *
 *   Expressões mistas de tipos:
 *   - Conversão automática de tipo menor para tipo maior
 *    Ex: short -> int
 *   - Conversão manual do tipo maior para o menor
 *    Ex: float -> int
 *      -> Isso poderá gerar perda de informações
 *      float num = static_cast<float> num;
 *
 *   - Se os tipos forem muito diferentes, a expressão gerará um erro
 *    Ex: uma expressão de float com string
 *
 *   Cuidado! Comparação de double e int, por exemplo, pode trazer resultados inesperados.
 *   -> é porsível que ele promova o int para double antes de comparar
 *
 * Statement:
 * - Uma linha completa de código que performa uma ação
 *   Ex:
 *    int x; -> declaração
 *    numero = 20; -> assignment
 *    x = 2 * 4; -> assignment
 *    if (a > b) std::cout << "A > B";
 *    ; -> null
 *
 * Operadores:
 *  - Unario
 *  - binario
 *  - ternario
 *
 *  - assignment (=)
 *    - Avaliando o valor gerado no lado direito e armazenando no lado esquerdo
 *
 *  - incremento/decremento
 *    ++/-- -> incremento por 1 ou decremento por 1
 *    Prefix ++num
 *    Posfix num++
 *    int a = ++num; -> num vai ser incrementado antes de ser usado
 *    Ex:
 *      int a = ++num + 10;
 *      -------------------
 *      -> 1 num = num + 1;
 *      -> 2 int a = num + 10;
 *
 *    int b = num++; -> num vai ser incrementado depois de ser usado;
 *    Ex:
 *      int a = num++ + 10;
 *      -------------------
 *      -> 1 int a = num + 10;
 *      -> 2 num = num + 1;
 *
 *  - relacional
 *    >            -> x <= 20
 *    >=           -> x >= 20
 *    <            -> x < 12
 *    <=           -> x > 10
 *    <=> (c++ 20) -> 0 < x > 18
 *  - logico
 *    ! / not
 *    && / and
 *    || / or
 *  - acesso por membro
 *  - outros ( operadores que não se encaixam bem nos de cima )
 *
 */
