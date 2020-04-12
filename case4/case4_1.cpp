/*	PROGRAM NAME	:PROGRAM TO DEMONSTRATE THE ACCESS SPECIFIERS
 *	FILENAME	:case4.cpp
 *	DATE		:09-04-2020
 *	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream
 */


#include <iostream>
using namespace std;
class base
{
 	private:
        int ij;
 	protected:
 	    int ik;
 	public:
 	    int il;
 	base() 
 	{
 	   ij = 1;
 	   ik = 2;
 	   il = 3;
 	}
};
class derive: private base
{
 	public:
 	    	void showdata()
 	    	{
 	        	cout <<  "   Using Accessmode as private    " << endl;
               		cout <<  "   j is not Accessible because we declared as private " << endl;             
              	 	cout <<  "   value of k is   " << ik << endl;
               		cout <<  "   value of l is   " << il << endl;
 	    }
};
class derivea: protected base
{
 	public:
 	    	void showdata()
 	    	{
 	           	cout<<   "   Using Accessmode as protected " << endl;
 	           	cout <<  "   j is not Accessible because we declared as private " << endl;
           		cout <<  "   value of k is   " << ik << endl;
               		cout <<  "   value of l is    " << il << endl;
 	    	}
};
class deriveb: public base
{
 	public:
 	    	void showdata()
 	    	{
 	    		cout<<   "   Using Accessmode as public " << endl;;
 	           	cout <<  "   j is not Accessible because we declared as private " << endl;
               		cout <<  "   value of k is   " << ik << endl;
               		cout <<  "   value of l is   " << il << endl;
 	    	}
};
int main(int argc,char *argv[])
{
    if(argc>1) 
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"		or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
		//Creating Object To derive,aderivea,deriveb
     		derive a;	
     		derivea b;
     		deriveb c;
		//Accessing Data through object
     		a.showdata();
     		b.showdata();
     		c.showdata();
	} 
	return 0;
}
