// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Counter
{
private:
 int c; 
public:
Counter() 
{ c=0;}
 int getC() 
{ return c; }
void operator ++ () 
{
++c;
}
};

int main()
{
Counter c2;

cout << "\nc2=" << c2.getC();

++c2; 
cout << "\nc2=" << c2.getC();
    
}