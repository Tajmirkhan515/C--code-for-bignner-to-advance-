#include <iostream>
using namespace std;
#include <process.h> //for exit()

const int MAX = 3;

class Stack
{
protected: 
	
	int st[MAX]; 
	int top; 
public:
	Stack() 
	{
		top = -1;
	}
	void push(int var) 
	{
		st[++top] = var;
	}
	int pop() 
	{
		return st[top--];
	}
};


class ModifyStack : public Stack
{
public:
	void push(int var) 
	{
		if (top >= MAX - 1) 
		{
			cout << "Overflow \n"; exit(1);
		}
		Stack::push(var); 
	}
	int pop() 
	{
		if (top < 0) 
		{
			cout << "Underflow\n"; exit(1);
		}
		return Stack::pop(); 
	}
};

int main()
{
	ModifyStack stk;
	stk.push(11); 
	stk.push(22);
	stk.push(33);
	cout <<stk.pop()<<endl; 
	cout <<stk.pop()<<endl;
	cout <<stk.pop()<<endl;
	cout <<stk.pop()<<endl; //Error
	
	return 0;
}