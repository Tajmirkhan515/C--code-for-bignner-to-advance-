// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
	int c;
public:
	Counter()
	{
		c = 0;
	}
	int getC()
	{
		return c;
	}

	Counter operator ++() {
		++c;
		Counter temp;
		temp.c = c;
		return temp;
	}

};

int main()
{
	Counter c1,c2;

	cout << "\nc2=" << c2.getC();

	c1=++c2;
	cout << "\nc1=" << c1.getC();

}