#include <iostream>

class A {
public:
	A() {
    cout << "Constructor of A" << endl;
	}
};


class B {
public:
	B() {
		 cout << "Constructor of B" << endl;
	}
};

// Derived class inheriting from A and B
class C : public A, public B {
public:
	C() {
		cout << "Constructor of C" << endl;
	}
};

int main() {
	C obj; // Creating an object of class C
	return 0;
}