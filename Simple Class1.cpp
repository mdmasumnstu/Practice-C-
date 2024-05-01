#include<iostream>
#include<conio.h>
using namespace std;

class simple
{
	public:
		void display()
		{
			cout<<"This is the Simple class."<<endl;
			cout<<"Welcome to C++ programming world."<<endl;
		}
};

int main()
{
	simple d;
	d.display();
	
	getch();
	
}
