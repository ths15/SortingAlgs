#include <iostream>
using namespace std;

#include "SelectionSort.h"
#include "BubbleSort.h"

void printSort(int inputData[], int size);

int main()
{
	int unsortedData[] = { 12, 34, 11, 9, 65, 25, 73, 15, 43, 5 };
	int inputData[] = { 12, 34, 11, 9, 65, 25, 73, 15, 43, 5 };
	int arraySize = sizeof(inputData) / sizeof(inputData[0]);
	int userInput;

	cout << "Unsorted Array" << endl;
	printSort(inputData, arraySize);
	cout << endl << endl;

	do
	{
		for (int i = 0; i < arraySize; i++)
			inputData[i] = unsortedData[i];

		cout << "Please select your sorting algorithm" << endl;
		cout << "1. Selection Sort" << endl << "2. Bubble Sort" << endl << "0. Exit" << endl;

		cin >> userInput;
		cin.ignore();

		switch (userInput)
		{
		case 1:
			cout << "---Selection Sort---" << endl << endl;
			selectionSort(inputData, arraySize);
			break;
		case 2:
			cout << "---Bubble Sort---" << endl << endl;
			bubbleSort(inputData, arraySize);
			break;
		case 0:
			cout << "Goodbye";
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}

		if (userInput != 0)
		{
			cout << endl << "Sorted Array" << endl;
			printSort(inputData, arraySize);
		}
	} while (userInput != 0);

	return 0;
}


