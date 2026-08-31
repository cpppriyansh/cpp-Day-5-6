#pragma once
#include"Date.h"
#include<iostream>
using namespace std;

class Employee {
private:
	int empid;
	string name;
	Date d;
	static int count;

public:
	double salary;

public:
	Employee() {
		count++;
		empid = count;
		name = "NA";
		salary = 0.0;
		
	}

	Employee(string name, double salary, int dd, int mm, int yy)
		:d(dd,mm,yy)
	{
		count++;
		this->name = name;
		this->salary = salary;
		this->empid = count;
	}

	virtual void accept() {
		cout << "Employee ID: ";
		cin>> empid ;
		cout << "Employee Name: ";
		cin>> name ;
		cout << "Salary: ";
		cin>>salary;
		d.ddisplay();
	}
	
	void display() {
		cout << "Employee ID: " << empid << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Salary: " << salary << endl;
		d.ddisplay();
		cout << "\n";
	}
};

int Employee::count = 0;