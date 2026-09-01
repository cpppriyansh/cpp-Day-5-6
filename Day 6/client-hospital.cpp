#include"Emergency.h"
#include"outpatient.h"
#include"Inpatient.h"
#include"patient.h"

class printtoscreen {
public:
	static void display(patient* parr) {
		parr->displayDetails();
		
		
		if (typeid(*parr) == typeid(inpatient)) {
			inpatient* iptr;
			iptr = dynamic_cast<inpatient*>(parr);
			int a = iptr->calculateBill();
			cout << "Total Bill = " << a;
		}

		if (typeid(*parr) == typeid(outpatient)) {
			outpatient* optr;
			optr = dynamic_cast<outpatient*>(parr);
			optr->out();
			int a = optr->calculateBill();
			cout << "Total Bill = " << a;
		}

		if (typeid(*parr) == typeid(Emergency)) {
			Emergency* eptr;
			eptr = dynamic_cast<Emergency*>(parr);
			int a=eptr->calculateBill();
			cout << "Total Bill = " << a;
		}

	}
};

int main() {
	int nop;
	patient** parr;
	cout << "Enter number of patients: ";
	cin >> nop;
	
	parr = new patient*[nop];

	for (int i = 0; i < nop; i++) {
		cout << "Choose \n 1.Inpatient \n 2.Outpatient \n 3.emergency"<<endl;
		int choice;
		cin >> choice;

		switch (choice) {
		case 1:
			parr[i] = new inpatient(500, 002, 23, 3, "sarthak", 500);
			
			break;

		case 2:
			parr[i] = new outpatient(2000, 002, 23, 3, "sarthak", 500);
			break;

		case 3:
			parr[i] = new Emergency(10000, 5000, 500, 002, 23, 3, "sarthak", 500);
			break;

		}
	}

	for (int i = 0; i < nop; i++)
	{
		printtoscreen::display(parr[i]);
	}


}
