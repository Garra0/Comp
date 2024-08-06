#include<iostream>
using namespace std;

class Timer {
	int seconds;
	int menuts;
	int hours;
	string name;


public:
	Timer();

	Timer(int seconds);
	Timer(int seconds, int menuts);

	~Timer();

	void SetAll(int seconds, int menuts, int hours);

	void PrintTime();

	void decreseOneHour();

};

inline Timer::Timer() {
	seconds = 0;
	menuts = 0;
	hours = 0;
	name = "";

}

inline Timer::Timer(int seconds) {
	this->seconds = seconds;
	menuts = 0;
	hours = 0;
}

inline Timer::Timer(int seconds, int menuts) {
	this->seconds = seconds;
	menuts = 0;
	hours = 0;
}

inline Timer::~Timer() {
	cout << "The end";

}

inline void Timer::SetAll(int seconds, int menuts, int hours) {
	this->seconds = seconds;
	this->menuts = menuts;
	this->hours = hours;
}

inline void Timer::PrintTime() {
	cout << "the time is:\t"
		<< hours << ":" << menuts << ":" << seconds << endl;
}

inline void Timer::decreseOneHour() {
	if (hours == 1)
		hours = 12;
	else
		hours--;
}