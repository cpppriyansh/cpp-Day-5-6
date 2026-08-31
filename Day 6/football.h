#pragma once
#include"player.h"
#include<iostream>
using namespace std;

class football: public player {
private:
	int nog;

public:
	football() {
		nog = 0;
	}

	football(int nog, string name, int games)
	:player(name,games){
		this->nog = nog;
	}

	void display() {
		player::display();
		cout << "Goals: " << nog<<endl;
	}

	void f() {
		cout << player::name << " is playing football"<<endl;
	}
};