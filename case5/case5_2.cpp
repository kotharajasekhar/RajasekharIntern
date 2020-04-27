/*	PROGRAM NAME	:Constructor  and Destructor with virtual
 * 	FILENAME	:case5_2.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream,stdlib.h,typeinfo,bits/stdc++.h,string.h
 */

#include<iostream>
using namespace std;
class teacher
{
	int x;
	public:
		teacher()
		{
			cout<<"\n\tIn Teacher Constructor"<<endl;
		}
		virtual ~teacher()
		{
			cout<<"\n\tIn Teacher Desctructor:"<<endl;
		}
};
class student:protected teacher
{
	public:
		student()
		{
			cout<<"\n\tStudent Constructor"<<endl;
		}
		~student()
		{
			cout<<"\n\tSudent Desctructor"<<endl;
		}
};
int main(int argc,char  **argv)
{	 
 	if(argc==2)
	{
		cout<<"\tusage: ./a.out"<<endl;
		cout<<"\tThis program gives description of orderof constructor and destructors execution"<<endl;
	}
    	else
	{
		teacher *p=new teacher();
		student *q=new student();
	}
	return 0;
}
