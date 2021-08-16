#ifndef ASWAP_
#define ASWAP_
#include <iomanip>
#include <iostream>
using namespace std;

void copyarray(int*, int*, int);
void swaparray(int*, int*, int);
/*
int main()
{
	int size = 21;
	int* FullArray = new int[size];
	int* EmptyArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		FullArray[i] = ((i + 10) * 32) / 3;
		EmptyArray[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "FullArray[" << i << "]= " << FullArray[i];
		cout << "EmptyArray[" << i << "]= " << EmptyArray[i] << endl;
	}
	swaparray(EmptyArray, FullArray, size);
	cout << "After Copy Function\n\n\n\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "FullArray[" << i << "]= " << FullArray[i];
		cout << "EmptyArray[" << i << "]= " << EmptyArray[i] << endl;
	}

}*/

//copys array 1 to array 2 
void copyarray(int* A1, int* A2, int size)
{
	for (int i = 0; i < size; i++)
	{
		A1[i] = A2[i];
	}
}
void swaparray(int* A1, int* A2, int size)
{
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = A1[i];
	}
	for (int j = 0; j < size; j++)
	{
		A1[j] = A2[j];
	}
	for (int k = 0; k < size; k++)
	{
		A2[k] = temp[k];
	}
}




#endif