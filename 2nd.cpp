#include <iostream>
using namespace std;
int main(){
    int balance=1000;
    int withdrawal;
    int deposit;
    int choice;
   do{
    cout<<"\nWelcome to the ATM Machine";
    cout<<"\n1. Check Balance";
    cout<<"\n2. Withdraw Money";    
    cout<<"\n3. Deposit Money";
    cout<<"\n4. Exit";
    cout<<"\nEnter your choice: ";
    cin>>choice;
 
    if(choice==1){
        cout<<"Your balance is :"<<balance;
    }
    else if(choice==2){
        cout<<"Enter the amount to withdraw:";
        cin>>withdrawal;
       if (withdrawal>balance){
        cout<<"Insufficient balance";

       }
       else{
        balance=balance-withdrawal;
        cout<<"Withdrawal successful. Your new balance is:"<<balance;
       }
    }
    else if(choice==3){
        cout<<"Enter the amount to deposit:";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Deposit successful. Your new balance is :"<<balance;

    }
    else if(choice==4){
        cout<<"Thank you for using the ATM Machine";
    }
    else{
        cout<<"Invaild choice.Please try again.";
    }
    }
    while(choice!=4);
return 0;
}


