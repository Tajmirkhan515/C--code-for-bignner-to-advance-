#include <iostream>

class Date {
	int day;
public:	
	 Date(int dd) {
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
	 
	 Date d5(15); // normal constructor call
	 my_fct(d5);

	 Date d3 = {15}; // implicit call, d3 is object of type Date, but the 15 is eneteger.
	 my_fct(d3);


	 Date d4 = 333; // implicit call, same is above
	 my_fct(d4);

	 my_fct(344);  // implicit call, passing integer value to to type Date
	


	return 0;
}