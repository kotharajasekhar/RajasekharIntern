/*	PROGRAM NAME	:Initialisation of private variable in a class
 * 	FILENAME	:case5_1.cpp
 * 	DATE		:09-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream
 */

#include<iostream>

using namespace std;

class Rectangle
{ 

	//Declaration int variable
	int iLength;
	int ibreadth;
	static int iLen;
	static int iBre;
	public:
		/*Function name		:calculatearea
		 *Return type		:void
		 *Input parameters	:int,int
		*/
		void calculatearea(int iLength,int ibreadth)

              	{  
                  	int Area;
		  	//calculating area of rectangle
		 	 Area=(iLength*ibreadth);
                 	 cout<<"\n\tArea of Rectangle:"<<Area<<endl;
              	}

		/*Function Name		:calculateperimeter()
		 * Return Type		:void
		 * Input Parameters	:int,int
		 */
	      	void calculateperimeter()
		{
			int iPeri;
			iPeri=2*(iLen+iBre);
			cout<<"\n\tPerimeter of Rectangle:"<<iPeri<<endl;
		}

};

//private data member using scope resolution and assigning value.

int Rectangle::iLen=90;
int Rectangle::iBre=80;

//MainFunction

int main(int argc ,char **argv)
{

	//declaration of object for rectangle class
        Rectangle rect;
	if(argc==2)
	{
		cout<<"./program.exe "<<endl;
		cout<<"private access specifiers intialization"<<endl;
	}
	else
	{
		//accessing calculatearea function
        	rect.calculatearea(8,9);
		rect.calculateperimeter();
	}
	return 0;
}
