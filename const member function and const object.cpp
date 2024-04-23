#include <iostream>
using namespace std;

class School {
	int numberOfStudent;

public:	
	School(int dd) {
		numberOfStudent = dd;
	}
   	void printTR() const
	{		
		cout << "Total Number of Student: " << numberOfStudent <<std::endl;
	}

	void simpleMethod() {
		cout << "This is not constructor";
	}
};


int main() {
	const School obj=322;
	obj.printTR(); // the const method can call on both const and not const object
	//obj.simpleMethod(); //we can't call simple method on const object
	return 0;
}