

#include <iostream>

using namespace std;

class XYX {
	int width, hieght, deep;

public:
	
	XYX(int a=90, int b=88, int c=22) {
		width = a;
		hieght = b;
		deep = c;
	}

	

	void printValue() {
		cout << "value of width: " << width << endl;
		cout << "value of hieght: " << hieght<<endl;
		cout << "value of deep : " << deep<<endl;
	}

};

int main()
{
	XYX obj;

	obj.printValue();

	return 0;
}

