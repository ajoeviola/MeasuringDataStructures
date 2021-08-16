#ifndef QUICK_
#define QUICK_
#include <iostream>
#include "Timer.h"
using namespace std;

//Implementation of quick sort

int partition(int A[], int first, int last)
{
    //Initializing variables
    int mid, pindex, pivot, leftindex, rightindex;
    bool done = false;
    //find pivot
    mid = first + (last - first) / 2;

    if (A[first] > A[mid])//Sort First middle Last
    {
        swap(A[first], A[mid]);
    }
    if (A[mid] > A[last])
    {
        swap(A[mid], A[last]);
    }
    if (A[first] > A[mid])
    {
        swap(A[first], A[mid]);
    }
    swap(A[mid], A[last - 1]);

    //Set the pivot's initial index, and take pivot value down
    pindex = last - 1;
    pivot = A[pindex];

    //Set left and right indexes on opposite sides of the list
    leftindex = first + 1;
    rightindex = last - 2;

    //While bool done hasn't been turned true by last else statement
    while (!done)
    {
        //Move left index right (toward pivot)
        while (A[leftindex] < pivot)
        {
            leftindex++;
        }
        //Move right index left (toward pivot)
        while (A[rightindex] > pivot)
        {
            rightindex--;
        }

        //Check if right index and left index have passed each other
        if (leftindex < rightindex)
        {
            //Swap index values, and increase both
            swap(A[leftindex], A[rightindex]);
            leftindex++;
            rightindex--;
        }
        //Finish the while loop
        else
        {
            done = true;
        }
        //Swapping pivot's index with left index
        swap(A[pindex], A[leftindex]);
        pindex = leftindex;

        //return pivot index
        return pindex;
    }

}
void quicksort(int A[], int first, int last)
{
    //Set pivot index for further partition
    int pindex = partition(A, first, last);
    //Sort pivot- side
    quicksort(A, first, pindex - 1);
    //Sort pivot+ side
    quicksort(A, pindex + 1, last);
}
























#endif