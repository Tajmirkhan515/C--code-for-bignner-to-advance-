

#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////////
class Counter //base class
{
protected: //NOTE: it can access in the child class
	 int c; 
public:
	Counter()  //default
	{ 
		c = 0;
	}
	Counter(int a) //one argument
	{
		c = a;
	}
	
	int get_count() const //print value of c
	{
		return c;
	}
	Counter operator ++ () //incrment, 
	{
		return Counter(++c);
	}
};


// inherited from counter class
class CountDn : public Counter 
{
public:
	CountDn() : Counter() {

	}

	CountDn(int k) : Counter(k) {

	}

	Counter operator -- () 
	{
		return Counter(--c);
	}
};


int main()
{
	CountDn c1(4); 
	cout << "\nc1 = " << c1.get_count(); 
	++c1; ++c1; ++c1; 
	cout << "\nc1 = " << c1.get_count(); 
	--c1; --c1; 
	cout << "\nc1 = " << c1.get_count(); 
	cout << endl;
	return 0;
}
