#include "ordenacao.h"
#include <iostream>

using namespace std;


int main()
{
    /**
     * Testando o quicksort com vetor de inteiros
     *
     */
    int vetor[] = { 50, 42, 8, 23, 74, 91, 13, 26, 66, 3 };
    int tamanho = sizeof vetor / sizeof vetor[0];

    quicksort(vetor, 0, tamanho - 1);
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << ",";
    }

    return 0;
}