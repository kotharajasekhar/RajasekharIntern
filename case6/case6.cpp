/*	PROGRAM NAME	:keeping int *,chr[30] in private,describle operator overloading, member declarations.
 * 	FILENAME	:case_1.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream,stdlib.h,string.h
 */

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Name
{
	//declaration of variables in private
	char str[20];
	int *ival;
	public:
		//default constructor
		Name()
		{
			cout<<"IN default constructor"<<endl;
		}

		//parametrised constructor
		Name(char *Mystr)
		{
			cout<<"In parametrised constructor"<<endl;
			strcpy(str,Mystr);//coping string
		}
		
		/*Function Name	:display
		*Return Type	:void
		*/

		void display()
		{
			cout<<"value is "<<*ival<<endl;
		}

		/*Function Name	:display1
		*Return Type	:void
		*/

		void display1()
		{
			cout<<"string is:"<<str<<endl;
		}

		//overloadding oprator'+'
		Name operator+(Name s)
		{
			Name temp=str;
			//adding two strings
			strcat(temp.str,s.str);	
			return temp;
		}

		//put_value function

		/*Function Name		:put_value
		*Return Type		:void
		*Input parameter	:int *
		*/			

		void put_value(int *ig)
		{
			ival=ig;
		}
		~Name()
		{
			cout<<"IN destructor"<<endl;
		}
};

//MainFunction

int main()
{
	int iJ;
	cout<<"\n\tEnter value:\t";
	cin>>iJ;
	//object declaration for class "Name"
	Name str1=("welcome");
	Name str2=("c++");
	Name str3;
	Name s;
	str3=str1+str2;
	s.put_value(&iJ);
	s.display();
	str3.display1();
}
