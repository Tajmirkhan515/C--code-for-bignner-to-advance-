#include <iostream>
using namespace std;

class Number {
private:
	int value;
public:
	// Constructor 
	Number(int val = 0) : value(val) {}

	// Overloading the '<' operator for less than comparison
	bool operator<(Number num) const {
		return value < num.value;
	}

	// Overloading the '==' operator for equality comparison
	bool operator==(Number num) const {
		return value == num.value;
	}
};

int main() {
	Number num1(5);
	Number num2(5);

	
	if (num1 < num2) {
		std::cout << "num1 is less than num2" << std::endl;
	}
	else {
		std::cout << "num1 is not less than num2" << std::endl;
	}

	
	if (num1 == num2) {
		std::cout << "num1 is equal to num2" << std::endl;
	}
	else {
		std::cout << "num1 is not equal to num2" << std::endl;
	}

	return 0;
}
