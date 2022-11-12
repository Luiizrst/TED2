#include <iostream>
#include "ordenacao.h"


using namespace std;

// Imprime o vetor
void printVet(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << "[" << arr[i] << "]";
}

// Driver program to test above functions
int main()
{
	const int TAM = 1000;
	int arr[TAM];// = { 5, 3, 1, 9, 8, 2, 4, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	unsigned seed = time(0);
	srand(seed);
	for (int i = 0; i < TAM; ++i)
		arr[i] = rand() % 100;

	cout << "Vetor Original: ";
	printVet(arr, N);
	cout << "\n\n";

	bubbleSort(arr, N);
	cout << "Ordenado: ";
	printVet(arr, N);
	cout << "\n\n";

	return 0;
}
