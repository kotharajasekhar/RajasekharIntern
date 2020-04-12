/*	PROGRAM NAME	:PROGRAM TO DEMONSTRATE MODIFIER TYPES
 *	FILENAME	:case_1.cpp
 *	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream
 */


#include<iostream>
using namespace std;

// main function
int main(int argc,char *argv[])
{
	 // Declaring varible short integer  
	 // Declaring varible long integer  
	 // Declaring varible unsigned short 
	 // Declaring varible signed short   	
	int ix;
	short int ia;		
	long int ib;
	unsigned short sc;	
	signed short sd;
	
	if(argc>1) 
	{
		cout<<"\n\t Usage of file --- "
		"\t a and press Enter or"
		"\n\t ./filename.out and Press Enter"<<endl;
	}
	else
	{		
		cout <<"\n\tEnter Any Value:\t ";
		cin>>ix;
		//Assigned Same Values to ia,ib,sc,sd,ix  
		ia=sc=sd=ib=ix;   
		//Outputs Based on modifiers 
		cout<<" short int	: "<<ia<<endl;        
		cout<<" long int	: "<<ib<<endl;
		cout<<" unsigned short : "<<sc<<endl;
		cout<<" signed short	: "<<sd<<endl;
	} 
	return 0;
}
