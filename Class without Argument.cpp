#include<conio.h>
#include<iostream>
using namespace std;

class Max
{
	private:
		int a;
		int b;
	
	public:
		void getvalue()
		{
			cout<<"Enter the value of A: "<<endl;
			cin>>a;
			
			cout<<"Enter the value  of B: "<<endl;
			cin>>b;
		}
		
		void showvalue()
		{
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
		}
		
		void checkvalue()
		{
			if(a>b)
			{
				cout<<"Maximum Value: "<<a<<endl;
			}
			
			else
			{
				cout<<"Maximum Value: "<<b<<endl;
			}
		}
};

int main()
{
	Max d;
	d.getvalue();
	d.showvalue();
	d.checkvalue();
	
	getch();
}
