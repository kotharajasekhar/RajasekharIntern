/*	PROGRAM NAME	:PROGRAM TO DEMONSTRATE STORAGE CLASSES
 *	FILENAME	:case3_3.cpp
 *	DATE		:09-04-2020
 *	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream
 */

#include<iostream>
using namespace std;
//Gobal Variable
static int iS_u=110;
int iEx;
class storage
{
	public:
		//mutable variable  
		mutable int iMu;	
		int iZ;
		//default constructor
 		storage()
		{
			iMu=138;
			iZ=116;
		}
};

/*	FUNCTION NAME	:externstorage
 *	Return Type	:void
 */

void externstorage()
{
	extern int iEx;
	cout<<"\n\tThe Default value of extern variable:"<<iEx<<endl;
	iEx=39;
	cout<<"\tThe Modified value of extern variable:"<<iEx<<endl;
}

/*      FUNCTION NAME   :staticstorage                                                                         *      Return Type     :void                                                                                  */

void staticstorage()
{
	//Declaring static storage class variable 
 	static int iB_ss;
	cout<<"\n\tDefault value static storage class:"<<iB_ss<<endl;
	//local static varaible
 	static int iS_ss=6; 
 	iS_ss++;
 	cout<<"\n\tThe value of local static variable:"<<iS_ss<<endl;
 	cout<<"\tThe value of global static variable:"<<iS_u<<endl;
}

/*      FUNCTION NAME   :registerstorage                                                                    
 *	Return Type     :void                                                                                  */

void registerstorage()
{
	//Declaring Register storage class variable 
 	register int iRs;
 	cout<<"\n\tDefault value register storage class:"<<iRs<<endl;
 	cout<<"\n\tEnter registar value:\t";
 	cin>>iRs;
 	cout<<"\n\tThe value of register variable:"<<iRs<<endl;
}
/*	FUNCTION NAME	:autostorage
 *	Return Type	:void
 */

void autostorage()
{
	//Declaring auto storage class variable 
	auto int iA;	
 	cout<<"\n\tDefault value auto storage class:"<<iA<<endl;
 	cout<<"\tEnter auto variable:\t";
  	cin>>iA;
  	cout<<"\tThe value of auto variable:"<<iA<<endl;
}
int main(int argc,char **argv)
{
	//Declaration of object for class storage  
	const storage c;  
	//Accessing mutable storage class value 
	c.iMu=939; 	  
  	if(argc==2)
	{
		cout<<"\n\tUsageOfProgram:"<<endl;
		cout<<"\ta or ./program.exe"<<endl;
		cout<<"\tProgram Demonstrate About All Storage classes"<<endl;
	}
	else
	{
		//calling autostorage function
		autostorage();	
		//calling registerstorage function
		registerstorage();
		//calling staticstorage function 
		staticstorage();
		//calling externstorage function
		externstorage();
		cout<<"\n\tThe Mutable Value:"<<c.iMu<<endl;//dispalying mutable value.
	}
}	
