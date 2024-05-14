#include <iostream>

class ABC {
private:
	int x;
	int y;
public:
	// Constructor 
	ABC(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

	
	ABC operator+( ABC p2) {
		int new_x = x + p2.x;
		int new_y = y + p2.y;
		return ABC(new_x, new_y);
	}

	
	void display() {
		std::cout << "ABC: (" << x << ", " << y << ")" << std::endl;
	}
};

int main() {
	ABC p1(3, 4);
	ABC p2(5, 2);

	ABC p3 = p1 + p2; // Adding p1 and p2 using operator+

	std::cout << "Result: ";
	p3.display(); // Displaying the result

	return 0;
}