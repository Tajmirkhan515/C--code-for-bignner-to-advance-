#include <iostream>
using namespace std;
class MyClass {
public:
	static int count; // Static member variable
	int a;
	MyClass() {
		count++; // Increment count each time an object is created
	}
	static void ftn() {		// Here, we can access only the static variable
		cout << count << endl;
	}
};

// Definition of static member variable
int MyClass::count = 0;

int main() {
	MyClass obj1;
	MyClass obj2;
	MyClass obj3;
	MyClass::ftn();
	cout << "Total objects created: " << MyClass::count << endl; // Output: Total objects created: 3

	return 0;
}