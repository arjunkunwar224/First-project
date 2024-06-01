#include<iostream>
#include<string.h>
using namespace std;
void MainMenu();
class information
{
	public:
		static string name,gender,address;
		static string phone,c_id;
		static int age;
		char arr[100];
	 virtual void disp()
	{
			
			cout<<"\t\tEnter customer's ID : ";
			cin>>c_id;
			
			cout<<"\t\tEnter customer's name : ";
			cin>>name;
			
			cout<<"\t\tEnter customer's age : ";
			cin>>age;
			
			cout<<"\t\tEnter customer's gender(m/f) : ";
			cin>>gender;
			
			cout<<"\t\tEnter customer's Phone # : ";
			cin>>phone;
			
			cout<<"\t\tEnter customer's adress : ";
			cin>>address;
		
			cout<<"\n\n\t\tYour details has saved. ";
			 MainMenu();
    }

};
string information::name;
string information::address;
string information::gender;
string information::c_id;
string information::phone;
int information::age;

class Registration:public information{
    protected:
    	
		int choice;
		int choice1;
		char back;
	    
	public:
		static float charges;
		static string distination;
		void disp()
		    {
			cout<<"\t\t___Welcome to Flights__\n\n";
			string flights[3]={"UK","USA"};
			
			for(int a=0; a<2; a++){
				cout<<"\t\tPress "<<a+1<<" for "<<flights[a]<<". \n";
			}
			cout<<"\t\tEnter your choice : ";
			cin>>choice;
		 switch(choice)
	       {
			case 1:{
				system("cls");
				cout<<"\t\t_____Everest Airlines____\n";
				cout<<"\t\t_____________\n";
				cout<<"\t\t| Following are the flights         |\n";
				cout<<"\t\t|1.UK-435                          |\n";
				cout<<"\t\t| 08-15-2023  08:00AM  Rs. 55000    |\n";
				cout<<"\t\t|2.UK-445                          |\n";
				cout<<"\t\t| 08-16-2023  08:00AM  Rs. 34000    |\n";
				cout<<"\t\t|3.UK-467                          |\n";
				cout<<"\t\t| 08-18-2023  08:00AM  Rs. 44000    |\n";
				cout<<"\t\t|4.UK-335                          |\n";
				cout<<"\t\t| 08-19-2023  08:00AM  Rs. 64000    |\n";
				cout<<"\t\t|_____________|\n";
				cout<<"\t\tSelect the flight you want to book : ";
				cin>>choice1;
				
				if(choice1==1){
					charges=55000; ;
					distination="UK # 435";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";	
				}
				else if(choice1==2){
					charges=34000; ;
					distination="UK # 445";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else if(choice1==3){
					charges=44000; ;
					distination="UK # 467";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else if(choice1==4){
					charges=64000; ;
					distination="UK # 335";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else{
					cout<<"\n\t\tInvalid Input, Please try again\n";
					Registration::disp();
				}	
				
				cout<<"\n\t\tPress any number to go back to Main Menu\n";
				cin>>back;
				if(back==1){
					system("cls");
					MainMenu();
				}
				else{
					system("cls");
					MainMenu();
				}
				break;
			}
			case 2:{
				system("cls");
				cout<<"\t\t_____Etihad Airlines____\n";
				cout<<"\t\t_____________\n";
				cout<<"\t\t| Following are the flights         |\n";
				cout<<"\t\t|1.USA-435                          |\n";
				cout<<"\t\t| 08-15-2023  08:00AM  Rs. 55000    |\n";
				cout<<"\t\t|2.USA-445                          |\n";
				cout<<"\t\t| 08-016-2023  08:00AM  Rs. 34000    |\n";
				cout<<"\t\t|3.USA-467                          |\n";
				cout<<"\t\t| 08-16-2023   08:00AM  Rs. 44000    |\n";
				cout<<"\t\t|4.USA-335                          |\n";
				cout<<"\t\t| 08-18-2023  08:00AM  Rs. 64000    |\n";
				cout<<"\t\t|_____________|\n";
				cout<<"\t\tSelect the flight you want to book : ";
				cin>>choice1;
				
				if(choice1==1){
					charges=55000; ;
					distination="USA # 435";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";	
				}
				else if(choice1==2){
					charges=34000; ;
					distination="USA # 445";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else if(choice1==3){
					charges=44000; ;
					distination="USA # 467";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else if(choice1==4){
					charges=64000; ;
					distination="USA # 335";
					cout<<"\n\t\tYou have successfully booked the flight "<<distination<<"\n";
					cout<<"\t\tNow, You can go tho the Main Menu for Ticket \n";
				}
				else{
					cout<<"\n\t\tInvalid Input, Please try again\n";
					Registration::disp();
				}	
				
				cout<<"\n\t\tPress any number to go back to Main Menu\n";
				cin>>back;
				if(back==1){
					system("cls");
					MainMenu();
				}
				else{
					system("cls");
					MainMenu();}
				break;
			}
			default:{
				cout<<"\n\t\tInvalid Entry, Shifting to main menu ";
				system("cls");
				MainMenu();
				break;
			}
		}
            }
};
float Registration::charges;
string Registration::distination;

class ticket:public information
{
	public:
	information s;
	Registration f;	
	int back;
	void disp()
	{
	
	cout<<"\t\t_______PURE AIRWAYS______\n";
				cout<<"\t\t________TICKET_______\n";
				cout<<"\t\t___________________\n";
				cout<<"\t\t|  Customer's ID   	: "<<s.c_id<<"         \n";
				cout<<"\t\t|  Customer's Name	: "<<s.name<<"        \n";
				cout<<"\t\t|  Customer's Age  	: "<<s.age<<"         \n";
				cout<<"\t\t|  Customer's Gender  	: "<<s.gender<<"         \n";
				cout<<"\t\t|  Customer's PH #  	: "<<s.phone<<"         \n";
				cout<<"\t\t|  Customer's Address	: "<<s.address<<"     \n";
				cout<<"\t\t|  Distination & Flight : "<<f.distination<<"        \n";
				cout<<"\t\t|  Flight Cost      	: "<<f.charges<<"\n";
				cout<<"\t\t|\n";
				cout<<"\t\t|  Description : \n";
				cout<<"\t\t|       Please collect your ticket.\n";
				cout<<"\t\t|_________________\n";
				cout<<"\n\t\tPress any number to go back to Main Menu\n";
				cin>>back;
				if(back==1){
					system("cls");
					MainMenu();
				}
				else{
					system("cls");
					MainMenu();}
				
			}
};
class delticket:public information 
{
	protected:
		string n_id;
	public:
		Registration q;
		int back;
		void disp()
		{
			cout<<"\t\t\t_________________________________________"<<endl;
	        cout<<"\t\t\t\tWelcome to the PURE AIRLINES"<<endl;
         	cout<<"\t\t\t__________________________________________"<<endl;
			cout<<"\n\t\t\tEnter customer id so we can remove the ticket belonging to this id :: ";
			cin>>n_id;
			if(n_id==q.c_id)
			{
				cout<<"\n\t\t\t Your ticket of "<<q.distination<<" is deleted \n";
				cout<<"\n\t\t\tRecord is deleted\n";
				cout<<"\n\t\t\tPress any number to go back to Main Menu\n";
				cin>>back;
				if(back==1){
					system("cls");
					MainMenu();
				}
				else{
					system("cls");
					MainMenu();}	
			}
			else
			cout<<"\t\t\tYou enter invalid id number .\n";
			system("cls");
			MainMenu();
			
		}
};
void exit()
{
	
}
void MainMenu()
{
		
	int choice,choice1,back;
	cout<<"\n\t\t\t_______Main Menu______\n";
	cout<<"\t\t\t|______________________________________|\n";
	cout<<"\t\t\t|\tPress 1 to add customers details   |\n";
	cout<<"\t\t\t|\tPress 2 for flight registration    |\n";
	cout<<"\t\t\t|\tPress 3 for Ticket and charges 	   |\n";
	cout<<"\t\t\t|\tPress 4 to cancel Ticket           |\n";
	cout<<"\t\t\t|\tPress 5 to Exit                    |\n";
	cout<<"\t\t\t|_____________________________________|\n";
	cout<<"\n\t\t\tEnter your choice : ";
	cin>>choice;
		information *ptr=new information;
		Registration obj;
		ticket obj1;
		delticket obj2;
		
	system("cls");
	switch(choice)
	{
		case 1:
			{
				
				ptr->disp();
				break;
			}
		case 2:
			{
				ptr=&obj;
				ptr->disp();
				break;
			}
		case 3:
			{
			    ptr=&obj1;
			    ptr->disp();
				break;
			}
		case 4:
			{
				ptr=&obj2;
				ptr->disp();
				break;
			}
		case 5:
			{
				exit();
			}
	}
}
int main()
{
	string id,pass,lid,lpass;
	cout<<"\t\t\t________________________________________________"<<endl;
	cout<<"\t\t\t________________________________________________"<<endl;
	cout<<"\t\t\t\tWelcome to the PURE AIRLINES"<<endl;
	cout<<"\t\t\t____________________________________________"<<endl;
	cout<<"\t\t\t______________________________________________"<<endl;
	cout<<"\n\t\t\tSign Up your account"<<endl;
	cout<<"\n\t\t\tEnter an ID : ";
	cin>>id;
	
	cout<<"\t\t\tEnter a Password : ";
	cin>>pass;
	
	cout<<"\t\t\tProcessing your Account ";

	system("cls");
	login:
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t\tWelcome to the LOGIN PAGE"<<endl;
	cout<<"\t\t_________________________________________________"<<endl;
	cout<<"\t\tEnter your Login ID : ";
	cin>>lid;
	cout<<"\t\tEnter your Password : ";
	cin>>lpass;
	
	if(id==lid && pass==lpass){
		system("cls");
		cout<<"\t\t\t\tWELCOME  TO PURE AIRLINES \n";
		MainMenu();
	}
	else {
		cout<<"\t\t Invalid id password";
	system("cls");
	goto login;
	}
	return 0;
}

