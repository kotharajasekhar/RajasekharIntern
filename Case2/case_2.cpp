/*	PROGRAM NAME	:FIND THE FOR GIVEN EXPRESSION
 *	FILENAME	:case_2.cpp
 *	DATE		:09-04-2020
 *	AUTHOR		:K.V.RAJA SEKHAR
 *	LIBRARIES USED	:iostream,stdlib.h
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
/*	FUNCTION NAME	:square
 *	INPUT		:int
 *	OUTPUT		:int
 *	DESCRIPTION	:TO FIND THE FORMULA FOR EXPRESSION.
 */
int square(int iz)
{
	int iexp;
	iexp=(iz*(iz+1)*(2*iz+1))/6;	//Formula for Expression
	return iexp;			//return sum;
}

int main(int argc,char**argv)
{
	int ix,iy;
	//Here Displaying usage of program
	if(argc==2)
	{
		cout<<"\tusage:a"<<endl;	//Here 'a' is command to display output in windows
		cout<<"\tDisplays Given Expression Output"<<endl;
	}
	else
	{
		cout<<"\tInput\t:\t";
		cin>>ix;
		iy=square(ix);			//Calling square function
		cout<<"\tOutput\t:\t"<<iy<<endl;	//Displays output
	}
	return 0;
}
	
