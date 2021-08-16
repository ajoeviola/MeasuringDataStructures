//function that displays the selection screen to the user that returns the selection 
/*int selectionscreen() {
	int input;

	//display the menu and prompt user for which sort to call
	cout << "Select which algorithm you would like to run." << endl;
	cout << "1: insertion sort" << endl;
	cout << "2: selection sort" << endl;
	cout << "3: bubble sort" << endl;
	cout << "4: merge sort" << endl;
	cout << "5: quick sort" << endl;
	cin >> input;
	return input;
	system("CLS"); //clear the console
}*/

//function that chooses which instance of data set to call
/*void instance(int data[], int n) {
	int input;
	enum dataset { sorteddataset = 1, reverselysorteddataset, randomdataset }; //enumerator for the datasets

	//display the menu and prompt user for which instance to call
	cout << "Select which instance you would like to call" << endl;
	cout << "1: sorted input data set" << endl;
	cout << "2: reversely sorted input data set" << endl;
	cout << "3: random permutation of n" << endl;
	cin >> input;
	system("CLS"); //clear the console


	switch (input) {
	case sorteddataset:
		//set the data set to be sorted
		for (int i = 0; i < n; i++) {
			data[i] = i;
		}
		break;
	case reverselysorteddataset:
		//set the data set to be reversely sorted
		for (int i = n-1; i > 0; i--) {
			data[i] = i;
		}
		break;
	case randomdataset:
		randomset(data); //randomizes data set
		break;
	};
}*/

/*int selection; //integer that hold user selection
	int calls; //integer that holds how many times the user wants to call the algorithm
	int size; //interger that holds the size of the dataset*/

	//enum algorithm { insertionsort=1, selectionsort, bubblesort, mergesort, quicksort}; //enumerator for the algorithms

/*
	//prints the selection screen
	selection = selectionscreen();

	//call an algorithm based on the user's selection
	switch (selection) {
	case insertionsort:
		instance(dataarray, size); //prompt the user for the data input instance

		cout << "How many times would you like to call insertionsort?";
		cin >> calls;
		for (int i = 0; i < calls; i++) {
			//call insertion sort with datarray as the data set
		}
		break;
	case selectionsort:
		instance(dataarray, size); //prompt the user for the data input instance

		cout << "How many times would you like to call selectionsort?";
		cin >> calls;
		for (int i = 0; i < calls; i++) {
			//call selection sort with datarray as the data set
		}
		break;
	case bubblesort:
		instance(dataarray, size); //prompt the user for the data input instance

		cout << "How many times would you like to call bubblesort?";
		cin >> calls;
		for (int i = 0; i < calls; i++) {
			//call bubble sort with datarray as the data set
		}
		break;
	case mergesort:
		instance(dataarray, size); //prompt the user for the data input instance

		cout << "How many times would you like to call mergesort?";
		cin >> calls;
		for (int i = 0; i < calls; i++) {
			//call merge sort with datarray as the data set
		}
		break;
	case quicksort:
		instance(dataarray, size); //prompt the user for the data input instance

		cout << "How many times would you like to call quicksort?";
		cin >> calls;
		for (int i = 0; i < calls; i++) {
			//call quick sort with datarray as the data set
		}
		break;
	};

	cout << "end";
	*/