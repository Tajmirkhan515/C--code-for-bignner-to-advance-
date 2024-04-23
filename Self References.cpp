
#include <iostream>

class ABC {
public:
	ABC& f1() {
		std::cout << "f1 function" << std::endl;
		return *this;
	}

	ABC& f2() {
		std::cout << "f2 function" << std::endl;
		return *this;
	}

	ABC& f3() {
		std::cout << "f3 function" << std::endl;
		return *this;
	}
};

int main() {
	ABC obj;
	obj.f1().f2().f3();
	return 0;
}