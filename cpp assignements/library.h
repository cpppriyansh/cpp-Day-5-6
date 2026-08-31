//Create a LibraryMember class with member ID, name, and number of books issued.
//Initialize an object using a constructor and create another object using a copy constructor.
//Use a destructor to display a message when a member object is removed.

#pragma once
#include<iostream>
using namespace std;

class LibraryMember{
private:
	int memberid, nob;
	string name;

public:
	LibraryMember() {
		memberid = 0;
		nob = 0;
		name = "NA";

	}

	LibraryMember(int memberid, string name, int nob) {
		this->memberid = memberid;
		this->name = name;
		this->nob = nob;
		cout << "Parameterized Constructor Called." << endl;
	}

	LibraryMember(LibraryMember& copy) {
		this->memberid = copy.memberid;
		this->name = copy.name;
		this->nob = copy.nob;
		cout << "Copy Called." << endl;
	}


	~LibraryMember() {
		cout << "Member Object Removed."<<endl;
	}
};
