#include <iostream>
using namespace std;

void selectionSort(int inputData[], int size);
void swap(int* a, int* b);
void printSort(int inputData[], int size);

int main()
{
	int inputData[] = { 12, 34, 11, 9, 65, 25, 73, 15, 43, 5 };
	int arraySize = sizeof(inputData) / sizeof(inputData[0]);

	cout << "Hello, World!" << endl;

	selectionSort(inputData, arraySize);

	printSort(inputData, arraySize);

	return 0;
}

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

		swap(&inputData[currMinimumInd], &inputData[index]);
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printSort(int inputData[], int size)
{
	for (int i = 0; i < size; i++)
		cout << inputData[i] << endl;
}