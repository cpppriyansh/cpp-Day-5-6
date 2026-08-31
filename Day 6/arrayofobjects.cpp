#include"football.h"
#include"cricket.h"

class printtoscreen {
public:
	static void print(player* pptr) {
		pptr->display();

		if (typeid(*pptr) == typeid(football)) {
			football* fptr = dynamic_cast<football*> (pptr);
			fptr->f();
		}

		if (typeid(*pptr) == typeid(cricket)) {
			cricket* cptr = dynamic_cast<cricket*> (pptr);
			cptr->c();
		}
	}
};

int main() {

	cricket c1(10589, "Dhoni", 200);
	printtoscreen::print(&c1);

	football f1(297, "Messi", 300);
	printtoscreen::print(&f1);
}