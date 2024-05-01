#include <iostream>

class MyClass {
public:
	int data;

	// User-defined copy constructor
	MyClass(const MyClass &other) {
		data = other.data; // 
	}

	// Constructor
	MyClass(int value) : data(value) {}


	void display() {
		std::cout << "Data: " << data << std::endl;
	}
};

int main() {

	MyClass obj1(10);

	// Copying object using user-defined copy constructor
	MyClass obj2 = obj1;

	
	std::cout << "Object 1: ";
	obj1.display();
	std::cout << "Object 2: ";
	obj2.display();

	return 0;
}