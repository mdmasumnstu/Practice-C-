#include<conio.h>
#include<iostream>
using namespace std;

#define PI 3.1416
class Circle
{
	public:
		float radius;
		void getradius(float r);
		void showradius();
		int calculation();
		
};

void Circle::getradius(float r)
{
	radius=r;
	
}

void Circle::showradius()
{
	cout<<"The Radius: "<<radius<<endl;
}

int Circle::calculation()
{
	return PI*radius*radius;
}



int main()
{
	int k;
	float area;
	cout<<"Enter the any Radius: "<<endl;
	cin>>k;
	cout<<"K: "<<k<<endl;
	
	Circle m;
	m.getradius(k);
	m.showradius();
	m.calculation();
	
	area=m.calculation();
	cout<<"The Area is: "<<area<<endl;
	
}
