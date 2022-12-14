#include <iostream>
using namespace std;

#include "BubbleSort.h"
#include "Tools.h"

void bubbleSort(int inputData[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (inputData[j] > inputData[j + 1])
			{
				printSort(inputData, size);
				cout << " --> ";
				swap(&inputData[j], &inputData[j + 1]);
				printSort(inputData, size);
				cout << endl;
			}
		}
	}
}

