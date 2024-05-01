#include<iostream>
#include<conio.h>
using namespace std;

class Distance
{
	private:
		float feet;
		float inch;
		
	public:
		void getdis()
		{
			cout<<"Enter the Feet: "<<endl;
			cin>>feet;
			
			cout<<"Enter the inch: "<<endl;
			cin>>inch;
		}
		
		void showdis()
		{
			cout<<"Feet: "<<feet<<endl;
			cout<<"Inch: "<<inch<<endl;
		}
		
		void showdistance()
		{
			cout<<"Feet and Inch: "<<feet<<"-"<<inch<<endl;
		}
};

int main()
{
	Distance d1;
	d1.getdis();
	d1.showdis();
	d1.showdistance();
}
