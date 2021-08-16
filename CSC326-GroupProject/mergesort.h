#ifndef MERGE_
#define MERGE_
#include <iostream>
#include "Timer.h"
using namespace std;

//Implementation of merge sort 

//Basic Sorting Function Definitions
void merge(int A[], int first, int mid, int last, int n)
{
	int* temp = new int[n]; //Setting up temp array with max n

	//Setting up seperate subarrays
	int first1 = first;//First Subarray
	int last1 = mid;
	int first2 = mid + 1;//Second Subarray
	int last2 = last;

	int index = first1; //Subarray's next location

	//Moving items from main array into temparray
	while ((first1 <= last1) && (first2 <= last2))
	{
		//check and compare values between variables of subarrays
		//and move larger into temp array
		if (A[first1] <= A[first2])
		{
			temp[index] = A[first1];
			first1++;
		}
		else
		{
			temp[index] = A[first2];
			first2++;
		}
		//Move next location forward in temp array
		index++;
	}

	//Main Mergesort
	//Moving items from seperated subarrays into final array.
	while (first1 <= last1)
	{
		//A[first1] = temp[index];//Tried this, didn't work out
		temp[index] = A[first1];//Not sure if this line is causing issues
		first1++;
		index++;
	}
	while (first2 <= last2)
	{
		//A[first2] = temp[index];//Tried this, didn't work
		temp[index] = A[first2];//Not sure if this line is causing issues
		first2++;
		index++;
	}

	//Moving items back to main array from subarray sorted
	for (index = first; index <= last; index++)
	{
		A[index] = temp[index];
	}
}
void mergesort(int A[], int left, int right, int n, bool start)
{
	if (start) {
		CPUTimer T;
	}
	if (left < right)
	{

		int mid = (right + left) / 2;//Midpoint

		//sorting lefthand side
		mergesort(A, left, mid,n,0);

		//sorting righthand side
		mergesort(A, mid + 1, right,n,0);

		//Merging both sides
		merge(A, left, mid, right, n);
	}
}


void mergesteps(int A[], int first, int mid, int last, int n, int& steps)
{
    int* temp = new int[n]; //Setting up temp array with max n
    //Setting up seperate subarrays
    int first1 = first;//First Subarray
    int last1 = mid;
    int first2 = mid + 1;//Second Subarray
    steps++;
    int last2 = last;

    int index = first1; //Subarray's next location

    //Moving items from main array into temparray
    while ((first1 <= last1) && (first2 <= last2))
    {
        steps += 2;
        //check and compare values between variables of subarrays
        //and move larger into temp array
        if (A[first1] <= A[first2])
        {
            temp[index] = A[first1];
            first1++;
            steps += 3;
        }
        else
        {
            temp[index] = A[first2];
            first2++;
            steps += 3;
        }
        //Move next location forward in temp array
        index++;
        steps++;
    }

    //Main Mergesort
    //Moving items from seperated subarrays into final array.
    while (first1 <= last1)
    {
        //A[first1] = temp[index];//Tried this, didn't work out
        temp[index] = A[first1];//Not sure if this line is causing issues
        first1++;
        index++;
        steps += 4;
    }
    while (first2 <= last2)
    {
        //A[first2] = temp[index];//Tried this, didn't work
        temp[index] = A[first2];//Not sure if this line is causing issues
        first2++;
        index++;
        steps += 4;
    }

    //Moving items back to main array from subarray sorted
    for (index = first; index <= last; index++)
    {
        A[index] = temp[index];
        steps += 3;
    }
}
void mergesortsteps(int A[], int left, int right, int n, int& steps)
{
    if (left < right)
    {
        steps++;

        int mid = (right + left) / 2;//Midpoint
        steps += 2;
        //sorting lefthand side
        mergesortsteps(A, left, mid, n, steps);

        //sorting righthand side
        mergesortsteps(A, mid + 1, right, n, steps);

        //Merging both sides
        mergesteps(A, left, mid, right, n, steps);
    }
}


void mergesortaverage(int A[], int left, int right, int n, bool start)
{
	if (start) {
		CPUTimerNOOUT T;
	}
	if (left < right)
	{

		int mid = (right + left) / 2;//Midpoint

		//sorting lefthand side
		mergesort(A, left, mid, n, 0);

		//sorting righthand side
		mergesort(A, mid + 1, right, n, 0);

		//Merging both sides
		merge(A, left, mid, right, n);
	}
}


















#endif