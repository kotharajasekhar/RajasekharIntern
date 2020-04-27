/*	PROGRAM NAME	:PARSE THE COMMAND LINE AND DISPLAY THE OUTPUT
 * 	FILENAME	:case_1.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream,stdlib.h,string.h
 * */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
/*	FUNCTION NAME	:test
 * 	INPUT		:string
 * 	RETURN TYPE	:bool
 * 	DESCRIPTION	:TO CHECK THE LENGTH OF STRING IS '1' OR NOT.
 * */
bool test(string sx)
{
	int iLength;
	for(iLength=0;sx.length()==1;iLength++)
	{
		return true;	
	}
}
//main usig command line arguments.
int main(int argc,char *argv[])
{
	int i,iTestInt;		//Declaring Integer variables
	float fTestFloat;		//Declaring float variables
	if(argc==1)
	{
		cout<<"\tusage: a arg1 arg2 arg3 arg4"<<endl;
		//'a' is to show the output in windowscmd
		cout<<"\tDisplays The Sizeof Given Arguments"<<endl;
	}
	else
	{
		cout<<"\ttype:"<<"\t"<<"\tvalue"<<"\t"<<"\tsizeof"<<endl;
		for(i=1;i<argc;i++)
		{
			iTestInt=atoi(argv[i]);		//atoi convert ascii to int
			fTestFloat=atof(argv[i]);	//atof convert ascii to float
			if(iTestInt==0)
			{
				if(test(argv[i]))	//if condition satisfies then It will print char
				{
					cout<<"\tchar";
					cout<<"\t\t"<<argv[i]<< "\t\t"<<strlen(argv[i])<<endl;
				}
				else		//else It will print string
				{
					cout<<"\tstring";
					cout<<"\t\t"<<argv[i]<< "\t\t"<<strlen(argv[i])<<endl;
				}
			}
			else
			{
				if(iTestInt==fTestFloat)//if condition  stisfies then It will print int 
					cout<<"\tint"<< "\t\t"<<iTestInt<<"\t\t"<<sizeof(iTestInt)<<endl;
				else	//else It will print float
					cout<<"\tfloat"<< "\t\t"<<fTestFloat<<"\t\t"<<sizeof(fTestFloat)<<endl;
			}
		}
	}
	return 0;
}
