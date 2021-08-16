#ifndef BUBBLE_
#define BUBBLE_
#include <iostream>
#include "Timer.h"
using namespace std;

//Implementation of bubble sort

void bubblesort(int* A, int n)
{
	CPUTimer T;

	bool sorted = false;//False for swaps
	int pass = 1;//# of passes through array


	while (!sorted && (pass < n))
	{
		sorted = true;//Sorted unless sets off IF statement
		for (int i = 0; i < n - pass; i++)
		{
			int next = i + 1;
			if (A[i] > A[next])
			{
				swap(A[i], A[next]);
				sorted = false;
			}
		}
		pass++;
	}
}

void bubblesortsteps(int* A, int n, int& steps)
{
	bool sorted = false;//False for swaps
	int pass = 1;//# of passes through array
	steps += 2;

	while (!sorted && (pass < n))
	{
		steps += 2;
		sorted = true;//Sorted unless sets off IF statement
		steps++;
		for (int i = 0; i < n - pass; i++)
		{
			steps += 3;
			int next = i + 1;
			steps++;
			if (A[i] > A[next])
			{
				steps++;
				swap(A[i], A[next]);
				sorted = false;
				steps += 2;
			}
		}
		pass++;
		steps++;
	}
}

void bubblesortaverage(int* A, int n)
{
	CPUTimerNOOUT T;

	bool sorted = false;//False for swaps
	int pass = 1;//# of passes through array


	while (!sorted && (pass < n))
	{
		sorted = true;//Sorted unless sets off IF statement
		for (int i = 0; i < n - pass; i++)
		{
			int next = i + 1;
			if (A[i] > A[next])
			{
				swap(A[i], A[next]);
				sorted = false;
			}
		}
		pass++;
	}
}























#endif