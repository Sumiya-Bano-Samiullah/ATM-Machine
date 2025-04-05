#include<iostream>
using namespace std;

int main(){
	char login='l';
	char account='a';
	char quit='q';
	char option;
	bool flag=false;
	int id=23;
	int pass=2345;
	int log_id,log_pass;
	char deposit='d';
	char withdraw='w';
	char balance='r';
	char choice;
	int dep,draw,bal=0;
	cout<<"Hi,Welcome to Miss Sumiya Bano's ATM Machine!\n";
	while(!flag){
	    cout<<"\nPlease select an option from the menu below:\n";
	    cout<<"\nl-> Login\nc-> Create New Account\nq-> Quit\n\n>";
	    cin>>option;
	    if(option=='l'){
	    	cout<<"Enter your user id:";
	    	cin>>log_id;
	    	cout<<"Enter your user password:";
	    	cin>>log_pass;
	    	if(log_id==id && log_pass==pass){
	    		cout<<"Access Granted!\n\n";
	    		while(!flag){
	    			cout<<"\nd->Deposit Money\nw->Withdraw Money\nr->Request Balance\n\n>";
	    		cin>>choice;
	    		if(choice=='d'){
	    			cout<<"Amount of Deposit:";
	    			cin>>dep;
	    			bal+=dep;
				}
				else if(choice=='w'){
					cout<<"Amount of Withdraw:";
	    			cin>>draw;
	    			bal-=draw;
				}
				else if(choice=='r'){
					cout<<"\nYour balance is:"<<bal;
				}
				else{
					flag=true;
				}
			}
	    }
			else{
				cout<<"\n********LOGEDIN FAILED********\n";
			}
		}
		if(option=='c'){
	    	cout<<"Enter your user id:";
	    	cin>>id;
	    	cout<<"Enter your password:";
	    	cin>>pass;
	    	cout<<"\nThank You! Your account has been created!";
		}
		if(option=='q'){
	        flag=true;
		}
	}
		cout<<"Thanks for stopping by!";
	return 0;
}
