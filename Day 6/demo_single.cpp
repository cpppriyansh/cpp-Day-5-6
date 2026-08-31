#include"salesperson.h"
#include"manager.h"

class printtoscreen {
public:
	static void print(Employee* eptr) {
		eptr->display();

		if (typeid(*eptr) == typeid(Salesperson)) {
			Salesperson* sptr = dynamic_cast<Salesperson*> (eptr);
			sptr->calculate();
		}

		if (typeid(*eptr) == typeid(Manager)) {
			Manager* mptr = dynamic_cast<Manager*>(eptr);
			mptr->calculatem();
		}
	}
};

int main() {

	Employee e2("priyansh" , 60000.0, 2, 8, 2026);
	printtoscreen::print(&e2);

	Salesperson s1(0.10,1000, "priya", 20000, 21, 8 ,2026);
	printtoscreen::print(&s1);

	Manager m1(20000, "abc", 50000, 31, 8, 2026);
	printtoscreen::print(&m1);

}