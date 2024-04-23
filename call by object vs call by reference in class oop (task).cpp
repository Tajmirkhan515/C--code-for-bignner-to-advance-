


#include <iostream>
#include<string>
using namespace std;
// Define a simple InventoryItem class
class Mobile {

	
	



	private:
	string name;
	int model;
public:
	// Constructor
	Mobile(string n, int number) {
		name = n;
		model = number;
	}
	
	string getName() const { return name; }
	int getNumber() const { return model; }

	void setModel(int number) 
 	{
		model = number;
	}

	// pass by object
	void showMobileDetails(Mobile m) {
		cout << "mobile Name" << m.getName() << endl;

		cout << "mobile Number: " << m.getNumber() << std::endl;
	}
	
    // (passed by reference)
	void updatemobileModel(Mobile& item, int newNumber) {
		item.setModel(newNumber);
	}
};





int main() {
	Mobile m("Samsung", 1001);

	// Display item details
	m.showMobileDetails(m);

	// Update item number
	m.updatemobileModel(m, 2001);

	m.showMobileDetails(m);

	return 0;
}