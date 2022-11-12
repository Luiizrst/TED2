#include <iostream>

using namespace std;
/**
 * Método para fazer a troca de dados entre duas posições no vetor
 */
void troca(int i, int j, int vet[]) {
    int k = vet[i];
    vet[i] = vet[j];
    vet[j] = k;
}

/**
 * Método de particionamento que é o núcleo do algoritmo Quicksort.
 * É a implementação utilizando o paradigma dividir para conquistar
 */
int particionamento(int vet[], int p, int q) {
    int i = p;
    for (int j = p; j < q; j++) {
        if (vet[j] <= vet[q]) {
            troca(i++, j, vet);
        }
    }
    troca(i, q, vet);

    return i;
}

/**
 * Método que implementa o Quicksort recursivamente
 */
void quicksort(int vet[], int p, int r) {
    if (p >= r) {
        return;
    }
    int pivo = particionamento(vet, p, r);

    quicksort(vet, p, pivo - 1);
    quicksort(vet, pivo + 1, r);

}

