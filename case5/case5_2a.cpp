/*	PROGRAM NAME	:Constructorand Destructor without virtual
 * 	FILENAME	:case5_2a.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream
 */

#include<iostream>
using namespace std;
class vehicle
{
	int iNoofwheels;
	public:
		vehicle()
		{
			cout<<"\n\tvehical class constructor"<<endl;
		}
		vehicle(int x)
		{
			cout<<"\n\tInparametrised vehicle constructor"<<endl;
			iNoofwheels=x;
		}
		~vehicle()
		{
			cout<<"\n\tvehicle class destructor"<<endl;
		}
};

class car:public vehicle
{
	string iName;
	public:
		car()
		{
			cout<<"\n\tcar class constructor"<<endl;
		}
		car(string iName)
		{
			cout<<"\n\tIn car class parametrised constructor"<<endl;
			this->iName=iName;
		}
		~car()
		{
			cout<<"\n\tcar class destructor"<<endl;
		}
};

class bus:public vehicle
{
	int Noofseats;
	public:
		bus()
		{
			cout<<"\n\tbus class constructor"<<endl;
		}
		bus(int Noofseats)
		{
			cout<<"\n\tbus parrametrise constructor"<<endl;
			this->Noofseats=Noofseats;
		}
		~bus()
		{
			cout<<"Bus destructor"<<endl;
		}	
};

//MainFunction

int main(int argc,char **argv)
{
    	if(argc==2)
	{
		cout<<"\n\tusage: ./a.out"<<endl;
		cout<<"\n\tThis program gives description of orderof constructor and destructors execution"<<endl;
	}
	else
	{
		vehicle vl(4);
		car cl("Ford");
		car c2;
		bus bl(20);
		bus b2;
	}
	return 0;
}

	
