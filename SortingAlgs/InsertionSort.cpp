#include <iostream>
using namespace std;

#include "InsertionSort.h"
#include "Tools.h"

void insertionSort(int inputData[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;
		int key = i;
		while (inputData[key] < inputData[j])
		{
			printSort(inputData, size);
			cout << " --> ";
			swap(inputData[key], inputData[j]);
			printSort(inputData, size);
			cout << endl;
			j--;
			key--;
		}
	}
}