int main(int argc, char *argv[])
{
    char tipo_letra{'M'};

    int tipo_inteiro{-2};
    unsigned int tipo_sem_sinal_inteiro{20};
    long tipo_longo{9'000};

    float tipo_ponto_flutuante{1.2};

    bool tipo_booleano{false}; // podia ser 0

    return 0;
}

/*
 * Tipos primitivos:
 *  - char
 *    - Representação de characteres
 *    - Tipos:
 *      - char        -> 8 bits ( 1 byte )
 *      - char16_t    -> 16 bits
 *      - char32_t    -> 32 bits
 *      - wchar_t     -> representa o maior disponível
 *  - int
 *    - Representação de tipos inteiros
 *    - Por padrão int é signed
 *    - Tipos:
 *      - [ signed -> inteiros ]
 *      - signed short int      -> 16 bits
 *      - signed int            -> 16 bits
 *      - signed long int       -> 32 bits
 *      - signed long long int  -> 64 bits
 *
 *      - [ unsigned -> inteiros positivos ]
 *      - unsigned short int      -> 16 bits
 *      - unsigned int            -> 16 bits
 *      - unsigned long int       -> 32 bits
 *      - unsigned long long int  -> 64 bits
 *  - float
 *    - Representação de números reais
 *    - Precisão: 7 digitos
 *  - double
 *    - Representação de números reais
 *    - Precisão: 15 digitos
 *      - Tipo long double -> 19 digitos
 *  - bool
 *    - Usado para valores verdadeiro ou falso
 *    - 8 bits
 *
 *  <climits> -> informações sobre tamanho e precisão de ints
 *  <cfloat> -> informações sobre tamanho de precisão de floats
 */
