#include <iostream>
using namespace std;

#include "SelectionSort.h"
#include "BubbleSort.h"

void printSort(int inputData[], int size);

int main()
{
	int inputData[] = { 12, 34, 11, 9, 65, 25, 73, 15, 43, 5 };
	int arraySize = sizeof(inputData) / sizeof(inputData[0]);

	cout << "Unsorted Array" << endl;
	printSort(inputData, arraySize);

	//selectionSort(inputData, arraySize);
	bubbleSort(inputData, arraySize);

	cout << endl << "Sorted Array" << endl;
	printSort(inputData, arraySize);

	return 0;
}

void printSort(int inputData[], int size)
{
	for (int i = 0; i < size; i++)
		cout << inputData[i] << endl;
}
