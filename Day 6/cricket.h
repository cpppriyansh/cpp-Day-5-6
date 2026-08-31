#pragma once
#include"player.h"
using namespace std;

class cricket:public player {
private:
	int nor;

public:
	cricket() {
		nor = 0;
	}

	cricket(int nor, string name, int games) 
	:player(name, games){
		this->nor = nor;
	}

	void display() {
		player::display();
		cout << "Runs: " << nor<<endl;
	}

	void c() {
		cout << player::name << " is playing cricket"<<endl;
	}
};