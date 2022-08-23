#include <iostream>
using namespace std;

#include "Tools.h"

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printSort(int inputData[], int size)
{
	for (int i = 0; i < size; i++)
		cout << inputData[i] << " ";
}