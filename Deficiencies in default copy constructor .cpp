#include <iostream>
using namespace std;

 class MyClass
 { private:
	 double *aPtr;
	 int arraySize;
 public:	

	 MyClass(double value) {
		 
		 aPtr = new double;
		 setValue(value);
	 }
	
	 void print() const {
		 cout << *aPtr << endl;
	 }
	 void setValue(double value)
	 {
		 *aPtr = value;
	 }
	};

	  int main()
		  {
		   // Create an object
			   MyClass first(3);
			   // Make a copy of the object
			   MyClass second = first;		 		

			   first.print();

			   second.print();

			   second.setValue(33);

			   first.print();

			   second.print();


			   return 0;
		   }