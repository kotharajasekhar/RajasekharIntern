/*	PROGRAM NAME	:PARSE THE COMMAND LINE AND DISPLAY THE OUTPUT
 * 	FILENAME	:case_1.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream,stdlib.h,typeinfo,bits/stdc++.h,string.h
 * */
#include<iostream>
#include<stdlib.h>
#include<typeinfo>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
/*	FUNCTION NAME	:test
 * 	INPUT		:string
 * 	RETURN TYPE	:bool
 * 	DESCRIPTION	:TO CHECK THE LENGTH OF STRING IS '1' OR NOT.
 * */
bool test(string sx)
{
	int im;
	for(im=0;sx.length()==1;im++)
	{
		return true;	//if the condition satisfifies it return '1'.
	}
}
//main usig command line arguments.
int main(int argc,char *argv[])
{
	int ia,ib;		//Declaring Integer variables
	float fc;		//Declaring float variable
	if(argc==1)
	{
		cout<<"\tusage: a arg1 arg2 arg3 arg4"<<endl;
		cout<<"\tDisplays The Sizeof Given Arguments"<<endl;
	}
	else
	{
		cout<<"\ttype:"<<"\t"<<"\tvalue"<<"\t"<<"\tsizeof"<<endl;
		for(ia=1;ia<argc;ia++)
		{
			ib=atoi(argv[ia]);		//atoi convert ascii to int
			fc=atof(argv[ia]);		//atof convert ascii to float
			if(ib==0)
			{
				if(test(argv[ia]))	//if condition satisfies then It will print char
				{
					cout<<"\tchar";
					cout<<"\t\t"<<argv[ia]<< "\t\t"<<strlen(argv[ia])<<endl;
				}
				else		//else It will print string
				{
					cout<<"\tstring";
					cout<<"\t\t"<<argv[ia]<< "\t\t"<<sizeof(argv[ia])<<endl;
				}
			}
			else
			{
				if(ib==fc)	//if condition  stisfies then It will print int 
					cout<<"\tint"<< "\t\t"<<ib<<"\t\t"<<sizeof(ib)<<endl;
				else		//else It will print float
					cout<<"\tfloat"<< "\t\t"<<fc<<"\t\t"<<sizeof(fc)<<endl;
			}
		}
	}
	return 0;
}
