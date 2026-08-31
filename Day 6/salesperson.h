#pragma once
#include<string>
#include"demo_single.h"

class Salesperson : public Employee{
private:
	double com;
	int sales;
	double ns;

public:
	Salesperson() {
		com = 0.0;
		sales = 0;
		ns = 0.0;
	}

	Salesperson(double com, int sales, string name, int salary, int dd, int mm, int yy) 
		:Employee(name, salary, dd, mm, yy)
	{
		this->com = com;
		this->sales = sales;
		this->ns = 0.0;
	}

	void accept() {
		cout << "Enter Commision: ";
		cin >> com;
		cout << "Enter Sales: ";
		cin >> sales;
	}

	void calculate() {
		ns = Employee::salary + (com*sales);
		//Employee::display();
		cout << "Commision = " << com << endl;
		cout << "Sales= " << sales << endl;
		cout << "New Salary = "<<ns<<endl;
		cout << "\n";
	}
};