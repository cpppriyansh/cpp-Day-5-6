#pragma once
#include"patient.h"

class inpatient: public patient {
protected:
	int roomcharges;

public:
	inpatient(int roomcharges, int patientID, int age, int noofdays, string patientName, int doctorconsultation)
		:patient(patientID,age,noofdays,patientName, doctorconsultation)
	{
		this->roomcharges = roomcharges;
	}

	void displayDetails() {
		patient::displayDetails();
		cout << "Room Charges: " << roomcharges << endl;
	}

	int calculateBill() {
		return noofdays * roomcharges + doctorconsultation;
	}

};
