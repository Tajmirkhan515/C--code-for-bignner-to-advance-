
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

	Counter(int c)
	{
		this->c = c;
	}

	int getC()
	{
		return c;
	}

	Counter operator ++() {
		++c;
		return Counter(c);
	}
	
	Counter operator ++(int) {
		c++;
		
		return Counter(c);
	}

};

int main()
{
	Counter c1, c2;

	cout << "c2=" << c2.getC() << endl;
	cout << "c1=" << c1.getC()<<endl;
	c1 = ++c2;

	cout << "prefix increment c1=" << c1.getC()<<endl;
	cout << "prefix increment c2=" << c2.getC()<<endl;

	c1 = c2++;
	cout << "postfix increment c1=" << c1.getC() << endl;
	cout << "postfix increment c2=" << c2.getC() << endl;

	return 0;
}