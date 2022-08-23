#include <iostream>
using namespace std;

#include "BubbleSort.h"
#include "swap.h"

void bubbleSort(int inputData[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (inputData[j] > inputData[j + 1])
				swap(&inputData[j], &inputData[j + 1]);
		}
	}
}

