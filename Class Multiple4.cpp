#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
	private: 
		float radius,ar;
	
	public:
		void getradius()
		{
			cout<<endl<<"Enter the radius: "<<endl;
			cin>>radius;
		}
		
		void showradius()
		{
			cout<<"Radius: "<<radius<<endl;
		}
		
		void measure()
		{
			
			
			ar=3.1416*radius*radius;
		}
		
		void showcircle()
		{
			cout<<"The Area is: "<<ar<<endl;
		}
		
};

int main()
{
	Circle c1,c2;
	
	c1.getradius();
	c1.showradius();
	c1.measure();
	c1.showcircle();
	
	c2.getradius();
	c2.showradius();
	c2.measure();
	c2.showcircle();
}
