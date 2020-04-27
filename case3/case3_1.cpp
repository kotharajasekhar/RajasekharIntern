/*	PROGRAM NAME	:PROGRAM TO DEMONSTRATE VARIABLE SCOPE
 * 	FILENAME	:case3_1.cpp
 *	DATE		:10-04-2020
 *	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream
 */
#include<iostream>
using namespace std;
//Global Variable 
int ix = 13; 
//Here It Access Variable
void show() 
{ 
	cout<<"\t"<<ix<<endl; 
} 

// main function
int main(int argc,char *argv[])
{
	if(argc>1) 
	{
		cout<<"\n\t Usage of File --> \t a and Preess Enter"<<endl;
		//'a' in windows cmd by default takes output file
	}
	else
	{	
	  	// Prints The Variable ix
	   	cout<<"\tGlobal value: ";
		show(); 

		ix=16;
		// ix value Changing And Assigning  to local
		//Compiler gives much precedence to Local variable than global variable
		//Because Local variable defined with Same Name as of Global Variable
		cout<<"\tLocal value: ";
		show(); 
	}
       return 0;	
}
