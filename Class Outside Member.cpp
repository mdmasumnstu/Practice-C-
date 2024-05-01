#include<conio.h>
#include<iostream>
using namespace std;

class circle
{
	public:
		float radius,area;
		void getradius();
		void calculation();
		
};

void circle::getradius()
{
	cout<<"Enter the Radius: "<<endl;
	cin>>radius;
	cout<<"Radius: "<<radius<<endl;
}

void circle::calculation()
{
	area=3.1416*radius*radius;
	cout<<"Area of Circle: "<<area<<endl ;
}
int main()
{
	circle d;
	d.getradius();
	d.calculation();
}
