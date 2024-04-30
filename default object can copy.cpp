class Student {
private:
int a, b;
public:
Student(int n, int m) {
a = n;
b = m;}

void ftn() {
cout << "Simple functions" << endl;
}
void f(Student& d)
{d.ftn();
d.ftn();
}};

int main() {
Student obj1(23,44);
obj1.ftn();
Student obj2 = obj1;
obj2.ftn();
Student obj3{ obj2 };
obj3.ftn();

obj3.f(obj3);//
}
