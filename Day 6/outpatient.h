#pragma once
#include"patient.h"

class outpatient: public patient {
protected: 
	int medicines;

public:
	outpatient(int medicines, int patientID, int age, int noofdays, string patientName, int doctorconsultation) 
		:patient(patientID, age, noofdays, patientName, doctorconsultation)
	{
		this->medicines = medicines;
	}

	void displayDetails() {
		patient::displayDetails();
		cout << "Medicines: " << medicines<<endl;
	}
	void out() {
		cout << "Outpatient";
	}

	int calculateBill() {
		return medicines + (doctorconsultation * noofdays);
	}

};
