#include <iostream>
#include "insertionsort.h"
#include "selectionsort.h"
#include "bubblesort.h"
#include "mergesort.h"
#include "quicksorth.h"
#include "arrswap.h"
#include <stdlib.h>
#include <algorithm>
#include <chrono>
using namespace std;
//Anthony Viola and William Marroush


void display(int data[], int n) {

	for (int i = 0; i < n; i++) {
		cout << data[i] << " ";
	}

}

//function that randomizes a data set
void randomset(int data[], int n) {

	//set the seed so the generated sequence stays random
	srand(time(0));

	//shuffles the array
	random_shuffle(&data[0],&data[n]);

}



int main() {

	/*Using the various sorting alogorithms. Sort the numbers in increasing order.
	  Generate three instances: 
		1 - sorted input data set 1,2,3,...n
		2 - reversely sorted input data set n,n-1,...,3,2,1
		3 - random permutation of 1, 2, and n. Each number 1->n appears once, but in a random position
	*/

	//Task 1
	int steps = 0;
	int Narray[8] = { 100, 300, 500, 1000, 3000, 5000, 10000, 50000};
	
	//in order to run second part without merge sort going out of bounds, set k < 7 so n = 50000 is not run. 
	for (int k = 0; k < 4; k++) {
		//initialize the array of arrays
			int *dataarray = new int[Narray[k]]; 
		
		

		//set the array to be a sorted input data set
			for (int i = 0; i < Narray[k]; i++) {
				dataarray[i] = i + 1;
			}
	
		//copy array dataarray to array copyArray 
			int* A = new int[Narray[k]];
			copyarray(A, dataarray, Narray[k]);
			
		

		//insertion sort for sorted input data set
			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Insertion Sort: ";
			insertionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			insertionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
			

		//selection sort for sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array

			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Selection Sort: ";
			selectionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);
			selectionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//bubble sort for sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array

			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Bubble Sort: ";
			bubblesort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);
			bubblesortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//merge sort for sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array

			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Merge Sort: ";
			mergesort(A, 0, Narray[k]-1,Narray[k],1);
			mergesortsteps(A, 0, Narray[k] - 1, Narray[k],steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//quick sort for sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array

			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Quick Sort: ";
			quicksort(A,0,Narray[k]-1,1);
			copyarray(A, dataarray, Narray[k]);
			quicksortsteps(A, 0, Narray[k] - 1, steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";



		//set the array to be a reversely sorted input data set
		
		for (int i = Narray[k]; i > 0; i--) {
			A[i] = Narray[k];
		}

		copyarray(A, dataarray, Narray[k]);

		//insertion sort for reversely sorted input data set
			cout << "Reversely Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Insertion Sort: ";
			insertionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			insertionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
		
			

		//selection sort for reversely sorted input data set
			copyarray(A, dataarray, Narray[k]);
			cout << "Reversely Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Selection Sort: ";
			selectionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			selectionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
			

		//bubble sort for reversely sorted input data set
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			cout << "Reversely Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Bubble Sort: ";
			bubblesort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			bubblesortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
			
			

		//merge sort for reversely sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			
			cout << "Reversely Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Merge Sort: ";
			mergesort(A, 0, Narray[k]-1, Narray[k], 1);
			copyarray(A, dataarray, Narray[k]);
			mergesortsteps(A, 0, Narray[k] - 1, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
			

		//quick sort for reversely sorted input data set
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			
			cout << "Reversely Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Quick Sort: ";
			quicksort(A, 0, Narray[k] - 1, 1);
			copyarray(A, dataarray, Narray[k]);
			quicksortsteps(A, 0, Narray[k] - 1, steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
			

			randomset(A, Narray[k]);
		
		//insertion sort for random input data set
			cout << "Random Input Data set n = " << Narray[k] << "\n";
			cout << "Insertion Sort: ";
			insertionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			insertionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//selection sort for random input data set
			randomset(A, Narray[k]);

			cout << "Random Input Data set n = " << Narray[k] << "\n";
			cout << "Selection Sort: ";
			selectionsort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			selectionsortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//bubble sort for random input data set
			randomset(A, Narray[k]);

			cout << "Random Input Data set n = " << Narray[k] << "\n";
			cout << "Bubble Sort: ";
			bubblesort(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]);  //reset array back to unsorted array
			bubblesortsteps(A, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//merge sort for random input data set
			randomset(A, Narray[k]);
			cout << "Random Input Data set n = " << Narray[k] << "\n";
			cout << "Merge Sort: ";
			mergesort(A, 0, Narray[k]-1, Narray[k], 1);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			mergesortsteps(A, 0, Narray[k] - 1, Narray[k], steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";


		//quick sort for random input data set
			randomset(A, Narray[k]);

			cout << "Sorted Input Data set n = " << Narray[k] << "\n";
			cout << "Quick Sort: "; //reset array back to unsorted array
			quicksort(A, 0, Narray[k] - 1, 1);
			copyarray(A, dataarray, Narray[k]);
			quicksortsteps(A, 0, Narray[k] - 1, steps);
			cout << "Steps: " << steps;
			cout << "\n" << "\n";
	}
	
	//task 2
for (int k = 0; k < 4; k++) {
		steps = 0;
		int* dataarray = new int[Narray[k]];
		int* A = dataarray;
		int totalsteps = 0;

		
		//insertion sort for random input data set
		cout << "InsertionSort Random Input Data set n = " << Narray[k] << "\n";
		for (int i = 0; i < 50; i++) {

			randomset(A, Narray[k]);
			insertionsortaverage(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			insertionsortsteps(A, Narray[k], steps);	
			totalsteps += steps;
			steps = 0;
		}
		cout << "Average time is: " << totaltime / 50 << "\n";
		cout << "Average Steps is: " << totalsteps / 50;
		totaltime = 0;
		totalsteps = 0;
		cout << "\n" << "\n";

		//selection sort for random input data set
		cout << "SelectionSort Random Input Data set n = " << Narray[k] << "\n";
		for (int i = 0; i < 50; i++) {

			randomset(A, Narray[k]);
			selectionsortaverage(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			selectionsortsteps(A, Narray[k], steps);
			totalsteps += steps;
			steps = 0;
		}
		cout << "Average time is: " << totaltime / 50 << "\n";
		cout << "Average steps is: " << totalsteps / 50;
		totaltime = 0;
		totalsteps = 0;
		cout << "\n" << "\n";

		//bubble sort for random input data set
		cout << "BubbleSort Random Input Data set n = " << Narray[k] << "\n";
		for (int i = 0; i < 50; i++) {

			randomset(A, Narray[k]);
			bubblesortaverage(A, Narray[k]);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			bubblesortsteps(A, Narray[k], steps);
			totalsteps += steps;
			steps = 0;
		}
		cout << "Average time is: " << totaltime / 50 << "\n";
		cout << "Average steps is: " << totalsteps / 50;
		totaltime = 0;
		totalsteps = 0;
		cout << "\n" << "\n";

		//merge sort for random input data set
		cout << "MergeSort Random Input Data set n = " << Narray[k] << "\n";
		for (int i = 0; i < 50; i++) {

			randomset(A, Narray[k]);
			//mergesortaverage(A, 0, Narray[k] - 1, Narray[k], 1);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			//mergesortsteps(A, 0, Narray[k] - 1, Narray[k], steps);
			totalsteps += steps;
			steps = 0;
		}
		cout << "Average time is: " << totaltime / 50 << "\n";
		cout << "Average steps is: " << totalsteps / 50;
		totaltime = 0;
		totalsteps = 0;
		cout << "\n" << "\n";

		//quick sort for random input data set
		cout << "QuickSort Random Input Data set n = " << Narray[k] << "\n";
		for (int i = 0; i < 50; i++) {

			randomset(A, Narray[k]);
			//quicksortaverage(A, 0, Narray[k]-1, 1);
			copyarray(A, dataarray, Narray[k]); //reset array back to unsorted array
			//quicksortsteps(A, 0, Narray[k] - 1, steps);
			totalsteps += steps;
			steps = 0;
		}
		cout << "Average time is: " << totaltime / 50 << "\n";
		cout << "Average steps is: " << totalsteps / 50;
		totaltime = 0;
		totalsteps = 0;

		cout << "\n" << "\n";
	}
	
	
	//Task 2 

}