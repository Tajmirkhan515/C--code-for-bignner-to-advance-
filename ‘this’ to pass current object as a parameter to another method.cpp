#include <iostream>
using namespace std;

class MyClass {
public:
void displayAddress() {
cout << "Memory address of current object: " << this << endl;
}

void passObject(MyClass* obj) {
cout << "Memory address of passed object: " << obj << endl;
}

void passCurrentObject() {
passObject(this); // Using 'this' to pass the current object as a parameter
}
};

int main() {
MyClass obj1;
MyClass obj2;

obj1.displayAddress(); 
obj2.displayAddress(); 

obj1.passCurrentObject(); 
obj2.passCurrentObject(); 

return 0;
}
