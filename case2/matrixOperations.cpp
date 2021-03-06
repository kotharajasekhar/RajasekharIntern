/*	PROGRAM NAME	:Perform The Given Matirx To Get Row,Column and Diagonal Operations
 * 	FILENAME	:matrixOperations.cpp
 * 	DATE		:12-05-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 * 	LIBRARIES USED	:iostream,cstdlib
 * */

#include<iostream>
#include<cstdlib>
using namespace std;

void readMatrix();
void displayMatrix();
void rowMatrix();
void columnMatrix();
void diagonalMatrix();

//Global Declared Variables

int row_size;
int col_size;
char matrix[100][100];
int row;
int col;

//MainFunction

int main()
{
	
	cout<<"\n\tEnter the row size:\t";
	cin>>row_size;
	cout<<"\n\tEnter the column size:\t";
	cin>>col_size;

	readMatrix();
	displayMatrix();

	int choice;
	while(1)
	{
		cout<<"------------\n\tOPTIONS TO PERFORM----------"<<endl;
		cout<<"\tcase-1: RowWise Operation"<<endl;	
		cout<<"\tcase-2: ColumnWise Operation"<<endl;
		cout<<"\tcase-3: DiagonalWise Operation"<<endl;
		cout<<"\tcase-4: Exit"<<endl;
		cout<<"\tEnter your Choice:\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
				rowMatrix();
				break;
			case 2:		
				columnMatrix();
				break;
			case 3:
				diagonalMatrix();
				break;
			case 4:
				exit(1);
			default:
				cout<<"Invalid Choice"<<endl;
				break;
		}
		char option;
		cout<<"\n\tDo You Want To Check More Operations? [ Press (y/n)] :\t";
		cin>>option;
		if(option=='n')
			break;
	}
			
return 0;
}

//Read Matrix Function 

void readMatrix()
{
	//char mar[100][100];
	//int row;
	//int col;

	cout<<"\n\tEnter The Values For Given "<<row_size<<"*"<<col_size<<"Matrix:"<<endl; 

	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
	    	{	
			cout<<"\tEnter ("<<row<<","<<col<<") value: ";
                    		cin>>matrix[row][col];
 		}
	}
	cout<<endl;
}


//Display GivenMatrix Function 

void displayMatrix()
{
	cout<<"\tGiven Input:"<<endl;
	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
	    	{
        			cout<<matrix[row][col]<<" ";
    		}
		cout<<endl;
	}

	cout<<endl;
	cout<<endl;

}

//-------RowWise Matrix Function-------

void rowMatrix()
{
	char rmatrix[100][100];

	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
       			rmatrix[row][col]=matrix[row][col];
    		}
	}


	for(row=0;row<row_size;row++)
	{
		int zindex=1;
   		while(zindex<=row_size-1)
   		{
    			for(col=0;col<row_size-1;col++)
    			{
       				int kindex=col+1;
       				if(rmatrix[row][col]=='*' || rmatrix[row][kindex]=='*')
       				{
           					break;
       				}
        				if(rmatrix[row][col]==rmatrix[row][kindex])
        				{
            					while(kindex<=row_size-1)
            					{
                						if(kindex==row_size-1)
                						{
                  							rmatrix[row][row_size-2]=rmatrix[row][row_size-1];
                  							rmatrix[row][row_size-1]='*';
                  							break;
                						}
               						rmatrix[row][kindex-1]=rmatrix[row][kindex];
               						kindex=kindex+1;
            					}
      				  }
    			}
      		 	zindex=zindex+1;
    		}
	}
	//------Displaying values after row processing-------

	cout<<"\n\tFinal Matrix after row processing is"<<endl;

	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
        			cout<<rmatrix[row][col]<<" ";
    		}
    		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
}
//-------Column wise processing-------

void columnMatrix()
{
	char cmatrix[100][100];

	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
       			cmatrix[row][col]=matrix[col][row];
    		}
	}


	for(row=0;row<row_size;row++)
	{
		int zindex=1;
   		while(zindex<=row_size-1)
   		{
    			for(col=0;col<row_size-1;col++)
    			{
       				int kindex=col+1;
       				if(cmatrix[row][col]=='*' || cmatrix[row][kindex]=='*')
       				{
           					break;
       				}
        				if(cmatrix[row][col]==cmatrix[row][kindex])
        				{
            					while(kindex<=row_size-1)
            					{
                						if(kindex==row_size-1)
                						{
                  							cmatrix[row][row_size-2]=cmatrix[row][row_size-1];
                  							cmatrix[row][row_size-1]='*';
                  							break;
                						}
               						cmatrix[row][kindex-1]=cmatrix[row][kindex];
               						kindex=kindex+1;
            					}
      				  }
    			}
      		 	zindex=zindex+1;
    		}
	}


	// -------Final Transpose to get column process-------

	char Fcmatrix[100][100];
	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
      			Fcmatrix[row][col]=cmatrix[col][row];

    		}
	}

	//-------Dissplaying values after Column  processing-------

	cout<<"\n\tFinal Matrix after Column processing is:"<<endl;

	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
        			cout<<Fcmatrix[row][col]<<" ";
    		}
    		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
}

// -------Diagonal processing-------

void diagonalMatrix()
{
	char temp[100][100];
	
	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
       			temp[row][col]=matrix[row][col];
    		}
	}

	// ---------Extracting the diagonals--------

	char digo[100];
	char digt[100];

	for(row=0;row<row_size;row++)
	{
		digo[row]=matrix[row][row];
	}

	int aindex=0;

	for(col=row_size-1;col>=0;col--)
	{
		digt[aindex]=matrix[aindex][col];
		aindex=aindex+1;
	}

	cout<< endl;
	cout<<endl;

	int zindex=1;

	while(zindex<=row_size-1)
	{
		for(col=0;col<row_size-1;col++)
    		{	
    	 		int kindex=col+1;
       			if(digo[col]=='*' || digo[kindex]=='*')
       			{
           				break;
       			}
        			if(digo[col]==digo[kindex])
        			{
				while(kindex<=row_size-1)
            				{
                					if(kindex==row_size-1)
                					{
                  						digo[row_size-2]=digo[row_size-1];
                 						digo[row_size-1]='*';
                  						break;
                					}
               					digo[kindex-1]=digo[kindex];
               					kindex=kindex+1;
            				}
        			}
    		}
		 zindex=zindex+1;
    	}


	// ----------for diagonal Two processing--------

	zindex=1;

	while(zindex<=row_size-1)
	{
    		for(col=0;col<row_size-1;col++)
    		{
       			int kindex=col+1;
       			if(digt[col]=='*' || digt[kindex]=='*')
       			{
           				break;
       			}
        			if(digt[col]==digt[kindex])
        			{
            				while(kindex<=row_size-1)
            				{
                					if(kindex==row_size-1)
                					{
                  						digt[row_size-2]=digt[row_size-1];
                  						digt[row_size-1]='*';
                  						break;
                					}
               					digt[kindex-1]=digt[kindex];
              					kindex=kindex+1;
            				}
        			}
    		}
       		zindex=zindex+1;
    	}


	// ---------Final diagonal matrix---------

	for(row=0;row<row_size;row++)
	{
		temp[row][row]=digo[row];
	}

	aindex=0;

	for(col=row_size-1;col>=0;col--)
	{
		temp[aindex][col]=digt[aindex];
		aindex=aindex+1;
	}

	cout<<"\n\tFinal Matrix after Diagonal processing is: "<<endl;

	for(row=0;row<row_size;row++)
	{
    		for(col=0;col<col_size;col++)
    		{
        			cout<<temp[row][col]<<" ";
    		}
    		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
}

