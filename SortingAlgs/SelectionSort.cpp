#include <iostream>
using namespace std;

#include "SelectionSort.h"
#include "Tools.h"

void selectionSort(int inputData[], int size)
{
	for (int index = 0; index < size - 1; index++)
	{
		int currMinimumInd = index;
		for (int i = index + 1; i < size; i++)
		{
			if (inputData[i] < inputData[currMinimumInd])
				currMinimumInd = i;
		}
		printSort(inputData, size);
		cout << " --> ";
		swap(&inputData[currMinimumInd], &inputData[index]);
		printSort(inputData, size);
		cout << endl;
	}
}
