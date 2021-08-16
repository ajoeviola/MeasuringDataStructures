#ifndef INSERT_
#define INSERT_
#include <iostream>
#include "Timer.h"
using namespace std;

//Implementation of insertion sort CHECKED

void insertionsort(int* A, int n)
{
	CPUTimer T;
	for (int i = 1; i < n; i++)
	{
		int nextitem = A[i];//Next unsorted
		int location = i;//Insertion point
		int j = i - 1;
		while (location > 0 && A[j] > nextitem)
		{
			//Shifting the array to the right if needed
			A[location] = A[j];
			location--;
		}
		//Insert item
		A[location] = nextitem;
	}
}

void insertionsortsteps(int* A, int n, int& steps)
{
	for (int i = 1; i < n; i++)
	{
		steps += 3;
		int nextitem = A[i];//Next unsorted
		int location = i;//Insertion point
		int j = i - 1;
		steps += 3;
		while (location > 0 && A[j] > nextitem)
		{
			steps += 2;
			//Shifting the array to the right if needed
			A[location] = A[j];
			location--;
			steps += 2;
		}
		//Insert item
		A[location] = nextitem;
		steps++;
	}
}

void insertionsortaverage(int* A, int n)
{
	CPUTimerNOOUT T;
	for (int i = 1; i < n; i++)
	{
		int nextitem = A[i];//Next unsorted
		int location = i;//Insertion point
		int j = i - 1;
		while (location > 0 && A[j] > nextitem)
		{
			//Shifting the array to the right if needed
			A[location] = A[j];
			location--;
		}
		//Insert item
		A[location] = nextitem;
	}
}






















#endif