#include <iostream>
using namespace std;

class ABC {
private:
	int a;
public: 

	ABC(int k) {
		a = k;
	}

	friend ostream& operator<<(ostream& out, ABC o) {
		out.a << " more data ";
		return out;
	}

	friend istream& operator>>(istream& in, ABC& obj) {
		cout << "Enter any value to a: ";
		in >> obj.a;
		return in;
	}
};

int main()
{
	ABC obj(23);
	
	cout << "number is " << obj << endl;

	ABC obj2(22);

	cin >> obj2;

	cout << "Complex number is :" << obj2 << endl;
}