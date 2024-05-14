#include <iostream>
using namespace std;

class Number {
private:
	int value;
public:
	// Constructor to initialize value
	Number(int val = 0) : value(val) {}

	
	Number& operator+=(Number num) {
		value += num.value;
		return *this;
	}


	void display() {
		cout << "Value: " << value << std::endl;
	}
};

int main() {
	Number num1(5);
	Number num2(3);

	num1 += num2;

	std::cout << "Result: ";
	num1.display();

	return 0;
}
