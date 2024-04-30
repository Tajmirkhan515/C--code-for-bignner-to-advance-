// Define the Student class
class Student {
private:
string name;
int age;
float gpa;

public:
// Constructor to initialize student data
void setValue(string n, int a, float g) {
name = n;
age = a;
gpa = g;
}
// Method to display student information
void displayInfo() {
cout << "Student Information:" << endl;
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "GPA: " << gpa << endl;
}};


int main() {
// Create a Student object
Student student;

student.setValue("Ali", 23, 3.45);
// Display student information
student.displayInfo();

return 0;
}
