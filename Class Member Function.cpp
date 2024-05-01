#include<conio.h>
#include<iostream>
using namespace std;

class member
{
	public:
		void inside()
		{
			cout<<"This is the Inside member function."<<endl;
		}
		
		void outside();
};

void member::outside()
{
	cout<<"This is the outside member function."<<endl;
}

int main()
{
	member m;
	
	m.outside();
	m.inside();
}
