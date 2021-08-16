#ifndef QUICK_
#define QUICK_
#include <iostream>
#include <chrono>
using namespace std;

float totaltime = 0;

struct CPUTimer {
private:
	//initalize two time points start and end, and a float duration
	chrono::time_point<chrono::steady_clock> starttime, endtime;
	std::chrono::duration<float> duration;
public:
	CPUTimer() {
		//set starttime to the current clocktime
		starttime = chrono::high_resolution_clock::now();

	}
	~CPUTimer() {
		//set endtime to the current clocktime 
		endtime = chrono::high_resolution_clock::now();
		//set the duration to the end - start
		duration = endtime - starttime;

		printtime();
	}
	void printtime() { //print the total time taken

		//converts time in seconds to milliseconds 
		float milliseconds = duration.count() * 1000.0f;
		cout << "CPU Time is " << milliseconds << " milliseconds \n";
		totaltime += milliseconds;
	}
};

struct CPUTimerNOOUT {
private:
	//initalize two time points start and end, and a float duration
	chrono::time_point<chrono::steady_clock> starttime, endtime;
	std::chrono::duration<float> duration;
public:
	CPUTimerNOOUT() {
		//set starttime to the current clocktime
		starttime = chrono::high_resolution_clock::now();

	}
	~CPUTimerNOOUT() {
		//set endtime to the current clocktime 
		endtime = chrono::high_resolution_clock::now();
		//set the duration to the end - start
		duration = endtime - starttime;

		float milliseconds = duration.count() * 1000.0f;
		totaltime += milliseconds;
	}
	void printtime() { //print the total time taken

		//converts time in seconds to milliseconds 
		float milliseconds = duration.count() * 1000.0f;
		cout << "CPU Time is " << milliseconds << " milliseconds \n";
		totaltime += milliseconds;
	}
};




















#endif