#pragma once
#include<iostream>
using namespace std;

class player {
protected:
	string name;
	int games;

public:
	player() {
		name = "NA";
		games = 0;
	}

	player(string name, int games) {
		this->name = name;
		this->games = games;
	}

	virtual void display() {
		cout << "Name: " << name<<endl;
		cout << "Games: " << games<<endl;
	}
};