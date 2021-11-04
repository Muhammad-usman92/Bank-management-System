#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;

int total=0;

class account{
public:
int ACC[20];
string name[20];
char type[20];
int amount[20];

public:
	void creat_account();
	void show_account();
	void deposit();
	void withdraw();
	void balance_inquiry();
	void all_account();
	void close_account();
	void modify();
	
	
};
account a;
void account::creat_account(){
	int a=0;
	cout<<"How many account  do you want to craeat?"<<endl;
	cin>>a;
	
	if(total==0){
		total=a+total;
	
		for(int i=0;i<a;i++){
			cout<<i+1<<" account"<<endl;
			cout<<"Enter account number:";
			cin>>ACC[i];
			cout<<"Enter account holder name:";
			cin>>name[i];
			cout<<"Enter type of Account(S/C):";
			cin>>type[i];
			cout<<"Enter the amount you want to enter:";
			cin>>amount[i];
			
		}
	}
	else{
			for(int i=total;i<a+total;i++){
			cout<<"Enter account number:";
			cin>>ACC[i];
			cout<<"Enter account holder name:";
			cin>>name[i];
			cout<<"Enter type of Account(S/C):";
			cin>>type[i];
			cout<<"Enter the amount you want to enter:";
			
			cin>>amount[i];
			cout<<endl;
			break;
	}
	total=a+total;
	}
}
void account::deposit(){
	int acno;
	int am;
	cout<<"enter account number:";
	cin>>acno;
	if(total==0){
		cout<<"account no doen't match:";

		
	}
	
	else{
		cout<<"enter amount";
		cin>>am;
		for(int i=0;i<total;i++){
			if( ACC[i]==acno){
				amount[i]+=am;
				cout<<"after adding the balance will be: "<<amount[i]<<endl;
;				
			}
		}

	
}
}
void account:: withdraw(){
	int acno;
	int am;
	cout<<"enter account number:";
	cin>>acno;
	if(total==0){
		cout<<"account no doen't match:";
		
		
	}	else{
		cout<<"enter ammoutL";
		cin>>am;
		for(int i=0;i<total;i++){
			if( ACC[i]==acno){
				cout<<"your total balance:"<<amount[i]<<endl;
				amount[i]-=am;
				cout<<"after withdraw the balance will be: "<<amount[i]
;				
			}
		}
	}
	
}

void account:: close_account(){
	int a;
	cout<<"Enter account number:"<<endl;
	for(int i=0;i<total;i++){
		if(ACC[i]==a){
			name[i]=name[i+1];
			type[i]=type[i+1];
			amount[i]=amount[i+1];
			ACC[i]=ACC[i+1];
		}
	}
	total--;
}
void account::show_account(){
	int a;
	cout<<"Enter account Number";
	cin>>a;
	if(total==0){
		cout<<"No account yet:";
	}
	for(int i=0;i<total;i++){
		if(ACC[i]==a){
			cout<<"Account Number: "<<ACC[i]<<endl;
			cout<<"Account holder name: "<<name[i]<<endl;
			cout<<"Account type: "<<type[i]<<endl;
			cout<<"Account balance: "<<amount[i]<<endl;
		}
		
	}
}
void account::modify(){
	int a;
	cout<<"Enter account number: ";
	cin>>a;
	if(total==0){
		cout<<"no account yet: ";
		
	}else{
		for(int i=0;i<total;i++){
			if(ACC[i]==a){
			cout<<"Enter Account Number: ";
			cin>>ACC[i];
			cout<<"Enter Account holder name: ";
			cin>>name[i];
			cout<<"Enter Account type: ";
			cin>>type[i];
			cout<<"Account balance: ";
			cin>>amount[i];
						}
		}
	}
}
void account:: balance_inquiry(){
	int a;
	cout<<"Enter account number"<<endl;
	cin>>a;
	if(total==0){
		cout<<"No account Yet";
	}
	
	else{
		for(int i=0;i<total;i++){
			if(ACC[i]==a){
				cout<<"Account holder name: "<<name[i];
				cout<<endl<<"Total Balance is: "<<amount[i]<<endl;
				break;
			}
			else{
				cout<<"account Doest not match";
			}
		}
	}
}
void account::all_account(){
	if(total==0){
		cout<<"no account yet"
		
	;}else{
		for(int i=0;i<total;i++){
			cout<<"Account Number: "<<ACC[i]<<endl;
			cout<<"Account holder name: "<<name[i]<<endl;
			cout<<"Account type: "<<type[i]<<endl;
			cout<<"Account balance: "<<amount[i]<<endl;
		}
	}
}
int main(){

	for(int i=0;i<2;){
		int b;
		cout<<"Press 1 to Create Account: "<<endl;
		cout<<"Press 2 to show specific Account: "<<endl;
		cout<<"Press 3 for Deposit: "<<endl;
		cout<<"Press 4 for Withdraw: "<<endl;
		cout<<"Press 5 for balance inquiry: "<<endl;
		cout<<"Press 6 to show all Account: "<<endl;
		cout<<"Press 7 to close account: "<<endl;
		cout<<"Press 8 for modifu the account: "<<endl;
		cout<<"Press 9 for exit: "<<endl;
		cin>>b;
		
	
	switch(b){
	case 1:
		system("cls");
		a.creat_account();
		
		break;
	case 2:
			system("cls");
			a.show_account();
			break;
	case 3:
		system("cls");
		a.deposit();
		break;
	case 4:
		system("cls");
		a. withdraw();
		break;
	case 5:
		system("cls");
		a.balance_inquiry();
		break;
	case 6:
		system("cls");
		a.all_account();
		break;
	case 7:
		system("cls");
		a. close_account();
		break;
	case 8:
		system("cls");
		a. 	modify();
		break;
						
	case 9:
	exit(0);
	break;
	default:
	 cout<<"Invalid Input:";	
		
		
}

}



		return 0;
}


