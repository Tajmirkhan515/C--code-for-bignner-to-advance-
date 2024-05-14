
#include <iostream>
using namespace std;


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
	void operator ++() {
		++c;
	}
	Counter operator ++() {
		//++c;
		//Counter temp;
		//temp.c = c;
		return this.c;
	}

};

int main()
{
	Counter c1, c2;

	cout << "\nc2=" << c2.getC();
	cout<<"c2 increment :"<<++c2<<endl;
	cout<<"c2 increment :"<<++c2<<endl;
	
	

	c1 = ++c2;

	cout << "\nc1=" << c1.getC();
}