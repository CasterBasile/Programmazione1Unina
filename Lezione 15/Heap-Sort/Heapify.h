// C++ program for implementation of Heap Sort
#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i;         //Inizializza il più grade come radice 
	int l = 2 * i + 1;      //left = 2*i + 1
	int r = 2 * i + 2;     //right = 2*i + 2

	//Se il figlio sinistro è più grande della radice
	if (l < n && arr[l] > arr[largest])
		largest = l;

	//Se il figlio destro è più grande del più grande finora
	if (r < n && arr[r] > arr[largest])
		largest = r;

	//Se il più grande non è la radice
	if (largest != i) {
		swap(arr[i], arr[largest]);

	//Eseguire in modo ricorsivo Heapify del sottoalbero interessato
		heapify(arr, n, largest);
	}
}

//Funzione Heap-Sort
void heapSort(int arr[], int n)
{

	// Costruire l'heap (riorganizzare l'array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	
    //Estrarre uno per uno un elemento dall'heap
    for (int i = n - 1; i > 0; i--) {
	
		//Sposta la radice corrente alla fine
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

//Funzione per la stampa dell'array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

