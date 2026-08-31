#pragma once
#include<iostream>
using namespace std;

class Date {
private:
	int dd, mm, yy;

public:
	Date() {
		dd = 1;
		mm = 2;
		yy = 2026;
	}

	Date(int dd, int mm, int yy) {
		this->dd = dd;
		this->mm = mm;
		this->yy = yy;
	}

	void ddisplay() {
		cout << dd << " /" << mm << " /" << yy << endl;
	}
};