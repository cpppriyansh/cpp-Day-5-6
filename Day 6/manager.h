#pragma once
#include"demo_single.h"


class Manager : public Employee {
private:
	double incentive,isalary;

public:
	Manager() {
		incentive = 0.0;
		isalary = 0.0;
	}

	Manager(int incentive, string name, double salary, int dd, int mm, int yy) 
		:Employee(name, salary,dd, mm, yy)
	{
		this->incentive = incentive;
		isalary = 0.0;

	}

	void accept() {
		cout << "Enter Incentives: ";
		cin >> incentive;
	}

	void calculatem() {
		//Employee::display();
		isalary = incentive + Employee::salary;
		cout << "Manager Salary= " << isalary;
	}
};