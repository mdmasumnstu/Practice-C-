#include<iostream>
#include<conio.h>
using namespace std;

class circle
{
	private:
		float radius;
		
	public:
		void getradius()
		{
			cout<<"Enter the radius: "<<endl;
			cin>>radius;
		}
		
		void area()
		{
			float ar;
			cout<<"Measure the Circle: "<<endl;
			ar=3.11416*radius*radius;
			cout<<"Area: "<<ar;
		}
		
		void showradius()
		{
			cout<<"Radius: "<<radius<<endl;
		}
};

int main()
{
	circle d;
	
	d.getradius();
	d.showradius();
	d.area();
	
	getch();
}
