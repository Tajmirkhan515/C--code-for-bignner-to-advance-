

#include <iostream>

using namespace std;

class HostelRoom {
private:
	int roomNumber;
public:

	HostelRoom(int num) {
		setRoomNumber(num);
	}
	void setRoomNumber(int num) {
		roomNumber = num;
	}
	void getRoomNumber() {
		cout << roomNumber << endl;
	}
};

int main()
{
	HostelRoom obj1(4); // its same for both
	obj1.getRoomNumber();

	HostelRoom obj2 = obj1;
	obj2.getRoomNumber();


	return 0;
}

