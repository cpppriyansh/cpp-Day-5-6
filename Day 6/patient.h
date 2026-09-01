#pragma once
#include<iostream>
using namespace std;

class patient {

protected:
	int patientID, age, noofdays;
	int doctorconsultation;
	string patientName;
public: 
	patient(int patientID, int age, int noofdays, string patientName, int doctorconsultation) {
		this->patientID = patientID;
		this->age = age;
		this->noofdays = noofdays;
		this->patientName = patientName;
		this->doctorconsultation = doctorconsultation;
	}

	virtual void displayDetails() {
		cout << "Patient ID: " << patientID << endl;
		cout << "Patient Name: " << patientName << endl;
		cout << "Patient Age: " << age << endl;
		cout << "Number of Days Admitted: " << noofdays << endl;
		cout << "Doctor Consultation: " << doctorconsultation << endl;
	}

	virtual int calculateBill() {
		return doctorconsultation;
	} 
};
