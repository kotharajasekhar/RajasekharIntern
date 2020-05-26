

/*	PROGRAM NAME	:To designa friendpage ehich make a add delete edit search and adding friends.
 * 	FILENAME	:Friendpage.cpp
 * 	DATE		:25-05-2020
 * 	AUTHOR		:K.V.RAJA SEKHAR
 */

#include<iostream>
#include<fstream>
#include<unordered_map>
#include<stdlib.h>
#include <map>
#include<string.h>

using namespace std;

// creating map and defining key and value both as string data types
	map<string,string> Smain;
	map<string,string> Ssub; 
// creating iterator 
	map<string, string>::iterator itr;
	map<string, string>::iterator itr1;

class friendpage
{ 
	private:
	string Sname;
	string Smailid;
		
};

/*Function Name 	:add
  Parameters    	:no parameters
  Return Type  	:no return type
  Usage         	:to add user name and mailid */

	void add()
	{
		//allocating memorey dynamicaly for name and emailid 
		string *Sname = new string();
		string *Smailid = new string();
		cout<<"\n\tEnter name:\t ";
		cin.ignore();
		getline(cin,*Sname);
		// to check weather the user is already existed or not
		itr = Smain.find(*Sname);
		if(itr == Smain.end() )
		{	
			cout<<"\n\tEnter emailid:\t ";
			cin>>*Smailid;
			// inserting data into the map
			Smain.insert({*Sname,*Smailid});
			cout<<"\n\tUser Data added succesfully "<<endl;
			
		}
		else
		{				
		cout<<" \n\tUser name is already existed "<<endl;
		cout<<" \ttry to add with different user name "<<endl;
		}
		
		//deallocating memorey dynamicaly for name and emailid 
		delete Sname;
		delete Smailid;
	}

/*Function Name 	:display
  Parameters    	:no parameters
  Return Type   	:no return type
  Usage         	:to display name and mailid */
	
	void display()
	{
		// for loop to iterate map from starting to end 
		cout<<"\n\t\t\tName\t\t\tMail-ID"<<endl;
		cout<<"\t\t\t___________________________________________________"<<endl;
		for (itr =  Smain.begin(); itr !=  Smain.end(); ++itr)
	 	{ 
    			// printing the name and emailid
			cout<<"\t\t\t"<<itr->first<<"\t\t\t"<<itr->second<<endl;
     		}
		cout<<"\t\t\t___________________________________________________"<<endl;
	}
	
/*Function Name 	:edit
  Parameters    	:no parameters
  Return Type   	:no return type
  Usage         	:to edit the user emailid with the help of user name */
  
  
	void edit()
	{
		//allocating memorey dynamicaly for name and emailid 
		string *newemailid = new string();
		string *search = new string();
		//string *newname = new string();
		cout<<"\n\tEnter name to Edit your details:\t ";
		cin.ignore();
		getline(cin,*search);
		// find is used in map to search given data is presen or not
		itr = Smain.find(*search);
		if(itr == Smain.end()) 
		{
			cout << "\n\tEntered name is not present  check and try again "<<endl ; 
		}
		
		else
		{
		
			cout << "\n\t--Entered name is present--"<<endl;
			cout<<"\n\tEnter new emailid :\t";
			//modifying the emailid
			cin>>*newemailid;

			//cout>>"\n\tEnter new name:\t ";
			//clearing the previous data from the record
			Smain.erase(*search);

			// enterin the new updated data into the records
			Smain.insert({*search,*newemailid});
			cout<<"\n\tData updated succesfully"<<endl;

		}
		//deallocating memorey dynamicaly for name and emailid 
		delete newemailid;
		delete search;
		//delete newname;
	}
	
/*Function Name 	:remove
  Parameters    	:no parameters
  Return Type  	:no return type
  Usage         	:to delete the user emailid and user name with the help of user name */

	void remove()
	{
		//allocating memorey dynamicaly for name and emailid 
		string *search = new string();
		cout<<"\n\tEnter name to remove  details:\t ";
		cin.ignore();

		getline(cin,*search);

		itr = Smain.find(*search);
		// if condition to check given data is present in map or not
		if(itr == Smain.end())
		{  
			cout << "\n\tEntered name is not present Please check and try again"<<endl; 
		}
		else
		{
			//if the data is present the data has been removed from the records
			Smain.erase(*search);
			cout<<"\n\tDeleted succesfully"<<endl;	
		}
		//deallocating memorey dynamicaly for name and emailid 
		delete search;
	}

/*Function Name 	:search
  Parameters    	:no parameters
  Return Type   	:no return type
  Usage         	:to edit the user emailid with the help of user name */	
	
	void search()
	{
		//allocating memorey dynamicaly for name and emailid
		string *search = new string();
		bool b=false;

		cout<<"\n\tEnter Name or Emailid to search  details:\t ";
		cin.ignore();
		getline(cin,*search);

		// for loop to iterate the loop from starting to the ending
		for (itr =  Smain.begin(); itr !=  Smain.end(); ++itr)
	 	{ 
    	
			//if loop to check given data is present or not
			if(itr->first==*search || itr->second==*search )
			{
		
				//cout<<"\n\t---Given Details has been existed--- "<<endl;
		 		b=true;
				break;
			}
		
     		}
     		if (b==false)
     		{
     			cout<<"\n\tEntered details has no account"<<endl;
     		}
     		else
     		{
     			cout<<"\n\tEntered details has an account"<<endl;
 	 	}
 	 	//deallocating memorey dynamicaly for name and emailid
		delete search;
	}

/*Function Name 	:addingfriend
  Parameters    	:no parameters
  Return Type   	:no return type
  Usage         	:to edit the user emailid with the help of user name */
	
	void addingfriend()
	{
		
		//allocating memorey dynamicaly for name and emailid
		string *friendname = new string();
		string *friendemailid = new string();
		string *newname = new string();
		string *newemailid = new string();
		string *search = new string();
		char moreRecords;
		cout<<"\n\t----First enter your detils to add friends---- "<<endl;
		cout<<"\n\tEnter Name:\t";
		cin.ignore();
		getline(cin,*newname);
		cout<<"\n\tEnter Emailid:\t";
		cin>>*newemailid;
		
		do 
		{
		   	bool t=false;
		   	cout<<" select the name whom you whant to be friend \n "<<endl;
		
			for (itr =  Smain.begin(); itr !=  Smain.end(); ++itr)
	 		{ 
    				cout<<"\t\tName:\t"<< itr->first<<endl; 
    				cout<< "\t\tEmailid:\t " << itr->second << endl; 
     			}
		
			cin.ignore();
			getline(cin,*search);
	
			for (itr =  Smain.begin(); itr !=  Smain.end(); ++itr)
	 		{ 
    	
				if(itr->first==*search )
				{
					//cout<<"check1"<<endl;
					itr1 = Ssub.find(*search);
					//cout<<"check2"<<endl;
					if(itr1 == Ssub.end())
					{
						//cout << "check3"<<endl; 
						t=true;
		 				Ssub.insert({itr->first,itr->second});
		 				cout<<"\n\tFriend added succesfully \n "<<endl;
		 				itr1 == Ssub.begin();
		 				break;
					}
					else
					{
						cout<<"\n\tEntered name is already friend \n "<<endl;	
						t=true;
					}
					
				}
			}
	
		
     			if (t==false)
    			{
     				cout<<"\n\tEntered name is not present \n"<<endl;
     				cout<<endl;
    			 }
     			else
     			{
	 
    				 cout<<*newname<<" --is friend with this people \n "<<endl;
    				 for (itr =  Ssub.begin(); itr !=  Ssub.end(); ++itr)
				{ 
    					cout<<"\t\tName:\t"<< itr->first<<endl; 
    					cout<< "\t\tEmailid:\t " << itr->second << endl; 
    					cout<<endl;
     				}
     			}
	 		cout<<"\n\tDo you want to add more friends? (y/n):\t";
     			cin>>moreRecords;  
			if(moreRecords=='n')
				break; 
     		}while(moreRecords=='y');

  

     		//deallocating memorey dynamicaly for name and emailid
		delete friendname;
		delete friendemailid;
		delete newname;
		delete newemailid;
		delete search;
 	}
	
	
//MAIN FUNCTION	

int main(int argc,char* argv[])
{
	
	if(argc>=2)
    	{
	    	//For comparing input string through command line is -h
		if(strcmp(argv[1],"-h")==0)	
	    	{
            			cout<<" \n\tThis program is to add delete edit search and adding some friends  "<<endl;
            			cout<<" \tChoose the options From the above you want "<<endl;
	    	}
    	}
	else
	{
	
		int option;
        		friendpage f;
        		while(1)
        		{ 
        			cout<<"\n\t--------------------------FRIEND PAGE-----------------------"<<endl;
        			cout<<"\n\t1.Add New User\n\t2.Display\n\t3.Edit Existing User\n\t4.Delete\n\t5.Search\n\t6.Add friends\n\t7.Exit"<<endl;
			cout<<"\n\t----------------------------------------------------------------------"<<endl;
            			cout<<"\n\tEnter your option: \t";
            			cin>>option;
			switch(option)
            			{
                         			case 1:
                                				add();
                                				break;
                         			case 2:
                                				display();
                                				break;
                         			case 3:
                         				edit();
                         				break;
                         			case 4:
                         				remove();
                         				break;
                         			case 5:
                         				search();
                         				break;
                         			case 6:
                         				addingfriend();
                         				break;
                         			case 7:
                                				exit(1);
                            	
            			}
        		}
	}
}