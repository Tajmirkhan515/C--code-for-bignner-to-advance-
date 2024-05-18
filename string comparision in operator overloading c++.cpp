#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
	char str[40];
	//char *str;

public:
	MyString(const char* s) {
		//str = new char[strlen(s) + 1];
		//strcpy(str,s);
		strcpy_s(str, s);
	}

	bool operator==(const MyString& other) const {
		return strcmp(str, other.str) == 0;
	}

	void display() const {
		std::cout << str;
	}

	~MyString() {
		//delete[] str;
	}
};

int main() {
	MyString s1("Hello");
	MyString s2("Hello");
	MyString s3("World");

	if (s1 == s2) {
		cout << "s1 and s2 are equal" << std::endl;
	}
	else {
		cout << "s1 and s2 are not equal" << std::endl;
	}

	if (s1 == s3) {
		cout << "s1 and s3 are equal" << std::endl;
	}
	else {
		cout << "s1 and s3 are not equal" << std::endl;
	}

	return 0;
}