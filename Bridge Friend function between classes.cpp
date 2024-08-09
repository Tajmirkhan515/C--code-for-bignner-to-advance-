

#include <iostream>
using namespace std;

class DepComp; 
class DepMath
{
private:
	int data;
public:
	DepMath() : data(3) { } 
	friend int frifunc(DepMath, DepComp); 
};

class DepComp
{
private:
	int data;
public:
	DepComp() : data(7) { } 
	friend int frifunc(DepMath, DepComp); 
};


int frifunc(DepMath a, DepComp b) 
{
	return(a.data + b.data);
}
//--------------------------------------------------------------
int main()
{
	DepMath math;
	DepComp comp;
	cout << frifunc(math, comp) << endl; 
	return 0;
}