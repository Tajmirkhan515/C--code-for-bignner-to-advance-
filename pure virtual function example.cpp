#include <iostream>



// Base class

class Base {

public:

	// Virtual function

	virtual void print() = 0;

};



// Derived class

class Derived : public Base {

public:

	// Overridden virtual function

	void print() {

		std::cout << "Derived::print() called" << std::endl;

	}

};



int main() {

	Base* basePtr;

	Derived derivedObj;



	basePtr = &derivedObj;

	basePtr->print(); // Calls Derived::print() - late binding



	return 0;

}

