#include <iostream>

class Base {
public:
	virtual void print() const {
		std::cout << "Base::print()" << std::endl;
	}

	virtual void process() {
		std::cout << "Base::process()" << std::endl;
	}
};

class Derived : public Base {
public:
	// Override keyword ensures that this method overrides a virtual method in the base class
	void print() const override {
		std::cout << "Derived::print()" << std::endl;
	}

	// Final keyword prevents further overriding of this method in any further derived classes
	void process() final {
		std::cout << "Derived::process()" << std::endl;
	}
};

class FurtherDerived : public Derived {
public:
	// This will cause a compilation error because process() in Derived is marked as final
	// void process() override {
	//     std::cout << "FurtherDerived::process()" << std::endl;
	// }
};

int main() {
	Base* basePtr = new Derived();
	basePtr->print();  // Calls Derived::print()
	basePtr->process(); // Calls Derived::process()

	//delete basePtr;

	return 0;
}
