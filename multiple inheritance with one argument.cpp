#include <iostream>
using namespace std;

class A {
public:
	A(int a) {
		cout << "Constructor of A : " << a << endl;
	}
};

class B {
public:
	B(int b) {
		cout << "Constructor of B : " << b << endl;
	}
};

// Derived class inheriting from A and B
class C : public A, public B {
public:
	C(int a, int b, int c) : A(a), B(b) {
		cout << "Constructor of C : ";
		cout << c << endl;
	}
};

int main() {
	C obj(1, 2, 3); // Creating an object of class C
	return 0;
}
