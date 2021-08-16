#ifndef SELECTION_
#define SELECTION_
#include <iostream>
#include "Timer.h"
using namespace std;

int findindexoflargeststeps(const int* A, int size, int& steps)
{
	int largest = 0;//Largest item so far
	steps++;
	for (int i = 1; i < size; i++)
	{
		steps += 3;
		//Traversing array to find largest entry
		if (A[i] > A[largest])
		{
			largest = i;
			steps += 2;
		}
	}
	return largest;
}

int findindexoflargest(const int* A, int size)
{
	int largest = 0;//Largest item so far
	for (int i = 1; i < size; i++)
	{
		//Traversing array to find largest entry
		if (A[i] > A[largest])
		{
			largest = i;
		}
	}
	return largest;
}

//Implementation of selection sort

void selectionsort(int* A, int n)
{
	CPUTimer T;

	//Select largest entry and move it back
	for (int last = n - 1; last >= 1; last--)
	{
		int biggest = findindexoflargest(A, last + 1);
		swap(A[biggest], A[last]);
	}
}

void selectionsortsteps(int* A, int n, int& steps)
{
	//Select largest entry and move it back
	for (int last = n - 1; last >= 1; last--)
	{
		steps += 3;
		int biggest = findindexoflargeststeps(A, last + 1, steps);
		swap(A[biggest], A[last]);
		steps += 2;
	}
}

void selectionsortaverage(int* A, int n)
{
	CPUTimerNOOUT T;

	//Select largest entry and move it back
	for (int last = n - 1; last >= 1; last--)
	{
		int biggest = findindexoflargest(A, last + 1);
		swap(A[biggest], A[last]);
	}
}





















#endif