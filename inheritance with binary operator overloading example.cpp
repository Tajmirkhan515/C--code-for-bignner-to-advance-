#include <iostream>
using namespace std;

<<<<<<< Updated upstream
class Counter {
protected:
	int c;
public:
	Counter() : c(0) {}

	Counter(int a) : c(a) {}

	int get_count() const {
		return c;
	}



	Counter operator + (const Counter& other) 
	{

	Counter operator+(const Counter& other) const {

		return Counter(c + other.c);
	}
};

class CountDn : public Counter {
public:
	CountDn() : Counter() {}

	CountDn(int k) : Counter(k) {}


	CountDn operator - (const CountDn& other) 
	{

	
	CountDn(const Counter& other) : Counter(other) {}

	CountDn operator-(const CountDn& other) const {

		return CountDn(c - other.c);
	}
};

int main() {
	CountDn c1(4);
	CountDn c2(5);
	CountDn c3;

	cout << "value of c1  = " << c1.get_count() << endl;
	cout << "value of c2  = " << c2.get_count() << endl;


	c3 = c1 + c2;
	cout << "\nc3 = " << c3.get_count(); // Should output the sum of c1 and c2

	c3 = c1 + c2;  
	cout << "\nc3 = " << c3.get_count() << endl; 


	cout << "value of c1  = " << c1.get_count() << endl;
	cout << "value of c2  = " << c2.get_count() << endl;

	c3 = c1 - c2;  
	cout << "\nc3 = " << c3.get_count() << endl; 
	return 0;
=======
class X {
	void f();
	int m;
};
void user(X x, X? px)
{
	m = 1; // error : there is no m in scope
	x.m = 1; // OK
	x? > m = 1; // error : x is not a pointer
	px? > m = 1; // OK
	px.m = 1; // error : px is a pointer
>>>>>>> Stashed changes
}
