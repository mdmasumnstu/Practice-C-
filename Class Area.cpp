#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
	private: 
		int width,height;
	public:
		int area();
};

int Rectangle::area()
{
	cout<<"Enter height: "<<endl;
	cin>>height;
	cout<<"Height: "<<height<<endl;
	
	cout<<"Enter width: "<<endl;
	cin>>width;
	cout<<"Width: "<<width<<endl;
	
	height*width;
	cout<<"Area: "<<height*width<<endl;
}

int main()
{
	Rectangle ar;
	ar.area();
}
