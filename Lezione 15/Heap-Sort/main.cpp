#include "Heapify.h"

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
    cout << "L'array e' \n";
    printArray(arr, n);

	heapSort(arr, n);

	cout << "L'array ordinato mediante Heap-Sort e' \n";
	printArray(arr, n);
}
