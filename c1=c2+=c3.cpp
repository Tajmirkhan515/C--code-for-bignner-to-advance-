#include <iostream>

class Counter {
private:
	int count;
public:
	// Constructor to initialize count
	Counter(int initial = 0) : count(initial) {}

	
	Counter& operator+=(const Counter& other) {
		count += other.count;
		return *this;
	}

	// Method to display the count
	void display() const {
		std::cout << "Count: " << count << std::endl;
	}
};

int main() {
	Counter c1(5);
	Counter c2(3);
	Counter c3;

	
	c3 = c1 += c2;

	std::cout << "Result: ";
	c3.display();

	return 0;
}
