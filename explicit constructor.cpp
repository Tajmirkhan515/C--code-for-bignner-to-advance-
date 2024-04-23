#include <iostream>

class Date {
	int day;
public:	
	explicit Date(int dd) {
		day = dd;
	}
	void printDate() {
		std::cout << "Date: " << day<<std::endl;
	}
};

void my_fct(Date d) {
	d.printDate();
}

int main() {
	Date obj(15); // normal constructor

	Date d1{15}; // OK: considered explicit
	d1.printDate();

	Date d2 = Date{ 15 }; // OK: explicit
	d2.printDate();
	
	my_fct(Date{ 15 }); // OK: explicit

	my_fct(d2); // explicit 	

	return 0;
}