/*	PROGRAM NAME	:PROGRAM TO DEMONSTRATE THE ACCESS SPECIFIERS
 *	FILENAME	:case_4.cpp
 *	DATE		:09-04-2020
 *	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream
 */


#include<iostream>
using namespace std;

class Base
{
	private:
		int ia;
	public:
		int ib;
	protected:
		int ic;
	public:
		Base()
		{
			ia=1;
			ib=2;
			ic=3;
			
		}
			
		void show()
		{
			//Every members can be access here, same class
			cout<<"\n\tAccessing variable within the class"<<endl;
			cout<<"\tValue of ia: "<<ia<<endl;
			cout<<"\tValue of ib: "<<ib<<endl;
			cout<<"\tValue of ic: "<<ic<<endl;
		}
};

class Derive:public Base
{
	public:

		void display()
		{
			
			cout<<"\n\tAccessing variable in Sub class"<<endl;
		
			// ia is not accessible here it is private
			//cout<<"\tValue of ia: "<<ia<<endl;
			//ib is public so it is accessible any where
			cout<<"\tValue of ib: "<<ib<<endl;
			//'ic' is declared as protected, so it is accessible in sub class
			cout<<"\tValue of ic: "<<ic<<endl;
		}
};

// main function
int main(int argc,char *argv[])
{
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t a and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{							
		Base objd; // create object
		objd.show();
		
		Derive objs; // create object
		objs.display();    // Sub class show() function
		
		cout<<"\n\tAccessing variable Outside the class"<<endl;
		//'a' cannot be accessed as it is private
		//cout<<"\tvalue of a: "<<objd.ia<<endl;
		
		//'b' is public as can be accessed from any where
		cout<<"\tvalue of b: "<<objd.ib<<endl;
		
		//'c' is protected and cannot be accesed here
		//cout<<"\tvalue of c: "<<objd.ic<<endl;
	} 
	return 0;
}
