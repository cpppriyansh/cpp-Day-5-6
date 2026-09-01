#pragma once
#include"Inpatient.h"

class Emergency: public inpatient {
private:
	int emergencyCharge, ambulanceCharge;
public:
	Emergency(int emergencyCharge, int ambulanceCharge, int roomcharges, int patientID, int age, int noofdays, string patientName, int doctorconsultation) 
		:inpatient(roomcharges, patientID, age, noofdays, patientName, doctorconsultation)
	{
		this->emergencyCharge = emergencyCharge;
		this->ambulanceCharge = ambulanceCharge;
	}

	void displayDetails() {
		inpatient::displayDetails();
		cout << "Ambulance charge: " << ambulanceCharge<<endl;
		cout << "Emergency Charge: " << emergencyCharge;
	}

	int calculateBill() {
		return (ambulanceCharge + emergencyCharge) + (noofdays * roomcharges) + doctorconsultation;
	}
};
