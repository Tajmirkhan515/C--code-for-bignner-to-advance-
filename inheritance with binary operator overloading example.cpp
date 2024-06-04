#include <iostream>
using namespace std;


class Counter 
{
protected: 
	int c;
public:
	Counter()  
	{
		c = 0;
	}
	Counter(int a) 
	{
		c = a;
	}

	int get_count()  
	{
		return c;
	}


	Counter operator + (const Counter& other) 
	{
		return Counter(c + other.c);
	}
};


class CountDn : public Counter
{
public:
	CountDn() : Counter() {}

	CountDn(int k) : Counter(k) {}

	CountDn operator - (const CountDn& other) 
	{
		return CountDn(c - other.c);
	}
};

int main()
{
	CountDn c1(4);
	CountDn c2(5);
	CountDn c3;

	cout << "value of c1  = " << c1.get_count()<<endl;
	cout << "value of c2  = " << c2.get_count() << endl;

	c3 = c1 + c2;
	cout << "\nc3 = " << c3.get_count(); // Should output the sum of c1 and c2

	cout << endl;
	return 0;
}