//Create a class Number that dynamically allocates memory for an integer using a pointer.
//Initialize the value using a constructor, implement a copy constructor to create a deep copy,
//and use a destructor to release the dynamically allocated memory.

#pragma once
#include<iostream>
using namespace std;

class Number {
private: 
	int* arr;
	int noe;

public:
	Number() {
		arr = new int[noe];
		for (int i = 0; i < noe; i++) {
			arr[i] = 0;
		}
	}

	Number(int noe) {
		this->noe = noe;
		arr = new int[noe];
		for (int i = 0; i < noe; i++) {

			cout << "Enter the Element: ";
			cin >> arr[i];
			cout << endl;
		}
	}

	Number(const Number& copyobj) {
		
		this->noe = copyobj.noe;
		this->arr = new int[this->noe];
		for (int i = 0; i < this->noe; i++) {
			this->arr[i] = copyobj.arr[i];
		}
		cout << "Copy called"<<endl;
	}


	void display() {
		for (int i = 0; i < noe; i++) {
			cout << "Array Element = " <<arr[i]<< endl;
		}
	}

	~Number() {
		if (arr != NULL) {
			delete[] arr;
			arr = NULL;
			cout << "Destructor called";
		}
	}

	
};