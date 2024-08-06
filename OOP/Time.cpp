#pragma once
#include <iostream>
using namespace std;
class ClockType {
private:
	int hours;
	int minutes;
	int seconds;

public:

	ClockType() {
		setAll(0, 0, 0);
	}

	ClockType(int h, int m, int s) {
		setAll(h,m,s);
	}
	 

	void setAll(int h, int m, int s) {
		setMinutes(m);
		setHour(h);
		setSeconds(s);
	}


	void setMinutes(int m) {
		if (m < 0 || m>59)
			minutes = 0;
		else
			minutes = m;
	}

	void setHour(int h) {
		if (h < 0 || h>23)
			hours = 0;
		else
			hours = h;
	}

	void setSeconds(int s) {
		if (s < 0 || s>59)
			seconds = 0;
		else
			seconds = s;
	}


	const void getTime(int& s, int& m, int& h) {
		s = seconds;
		m = minutes;
		h = hours;
	}


	const void displayInfo() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}

	int incrementSecounds() {
		if (seconds == 59)
			return 0;
		return seconds++;
	}

	int incrementMinutes() {
		if (minutes == 59)
			return 0;
		return minutes++;
	}

	int incrementHours() {
		if (hours == 23)
			return 0;
		return hours++;
	}

	const bool equalTime(const ClockType clock) {
		if (clock.hours == hours)
			if (clock.minutes == minutes)
				if (clock.seconds == seconds)
					return true;
		return false;
	}

};