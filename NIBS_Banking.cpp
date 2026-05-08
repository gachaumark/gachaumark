#include <iostream>
using namespace std;
string  accountname;
string accNumber;
double balance;



void grtdata()
{
	cout<<"\n Enter the Account Holder's Name "<<endl;
	cin>>accountname;
	cout<<"\n Enter the Account number"<<endl;
	cin>>accNumber;
	cout<<"\n Enter the Opening Balance in (Ksh.): "<<endl;
	cin>>balance;
	cout<<"Account Created Successfully!!"<<endl;
}

void deposit()
{
	double amount;
	cout <<"Enter the amount to Deposit"<<endl;
	cin>>amount;
	if(amount>0)
	{
		balance+=amount;
	}
	else{
	
	    cout<<"Invalid Amount!Please Retry !!"<<endl;
	    cout<<"Deposit Successful! Current balance 1 "<<balance<<endl; 
	}
}

void send()
{
    double amount;
    int phone;
    cout<<"Enter Recipients Phonenumber"<<endl;
    cin>>phone;
    cout<<"Enter the amount to send"<<endl;
    cin>>amount;
    if (amount>0 && amount<balance)
    {
        balance-=amount;
    }
    else
    {
        cout<<"Invalid Amount! Please retry"<<endl;
        cout<<"Successfully sent to "<<phone<<"Current balance is "<<balance<<endl;
    }
}

void withdraw()
{
	double amount;
	cout <<"Enter the amount to Withdraw"<<endl;
	cin>>amount;
	if(amount>0)
	{
		balance-=amount;
	}
	else{
	
	    cout<<"Invalid Amount!Please Retry !!"<<endl;
	    cout<<"Withdrawal Successful! Current balance 1 "<<balance<<endl; 
	}
}



void display()
{
	cout<<"\n Account Name : "<<accountname;
	cout<<"\n Account Number : "<<accNumber;
	cout<<"\n Current Balance in (KSh.) : "<<balance<<endl;
}





int main()
{
	int option;
	int a;
	grtdata();
	cout<<"--------NIBS INTERNATIONAL BANK----"<<endl;
	cout<<"-------------MAIN MENU------------"<<endl;
	do
	{
			cout<<"1. Deposit Money "<<endl;
			cout<<"2. Withdraw Cash "<<endl;
			cout<<"3. Display ACC Information "<<endl;
			cout<<"4. Send Money "<<endl;
			cout<<"5. Exit The Programm "<<endl;
			cin>>option;
			switch(option)
			{
				case 1:
					deposit();
					break;
				case 2:
				    withdraw();
					break;
				case 3:
					display();
					break;
				case 4:
				     send();
				     break;
				case 5:
					cout<<"THank you for Banking with us!, Goodbye "<<endl;
				default:
					cout<<"Please choos ea valid option!"<<endl;				
			}
		}
			while (option!=4);
	
return 0;
}
