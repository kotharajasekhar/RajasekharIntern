/*	PROGRAM NAME	:Initialisation of private variable in a class
 * 	FILENAME	:case5_1.cpp
 * 	DATE		:10-04-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream
 */




#include<iostream>
using namespace std;
class Rectangle
{ 
	//declaration int variable
	int iwidth;
	int iheight;
	public:
		void set_values(int a,int b)
		{
			iwidth=a;
			iheight=b;
		}
		int find()
		{
			return(iwidth *iheight);
		}
		friend Rectangle calculate(Rectangle);
};

//Calculation Of Rectangle
Rectangle calculate(Rectangle d)
{
 	Rectangle rectres;
  	rectres.iwidth=d.iwidth*2;
  	rectres.iheight=d.iheight*2;
	return rectres;
} 

//MainFunction
int main(int argc ,char **argv)
{
	//declaration of object for rectangle class
        Rectangle rect,rectb;
	if(argc==2)
	{
		cout<<"./program.exe "<<endl;
		cout<<"private access specifiers intialization"<<endl;
	}
	else
	{
		//accessing calculatearea function
		rect.set_values(4,7);
		rectb=calculate(rect);
		cout<<"\n\tResult=\t"<<rectb.find();
	}
	return 0;
}
