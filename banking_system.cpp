#include<iostream>
#include<string>
#include"bank_functions.h"
using namespace std;
 
int main(){
    int choice;
    long long int deposit,acc_no,withdraw_amt;
    string  mob_no; 
    string gmail_id;
    char addres[100];
    char name[20];
    char restart;
    bank b[100];
    int acc_count=0;
    int find_account;
    do{
    cout<<"********* Welcome to MSquare Bank *************"<<endl;
    cout<<"This is automatic banking system"<<endl;
    cout<<"Choose the option from below what you want to perform"<<endl;
    cout<<"1.Account Creation"<<endl;
    cout<<"2.Money deposit"<<endl;
    cout<<"3.Money withdraw"<<endl;
    cout<<"4.Check balance"<<endl;
    cout<<"5.Account Details"<<endl;
    cout<<"6.Delete account"<<endl;
    cin>>choice;
    
    switch (choice)
    {
    case 1:
        cout<<"*****Thank you for your interest in our bank*****."<<endl;
        cout<< "***Please give the follwing details to open an account***"<<endl;
        cout<<"Enter Full name of account holder : "<<endl;
        cin.ignore();
        cin.getline(name,20);
        cout<<"Enter the mobile number : "<<endl;
        cin>>mob_no;
        cout<<"Enter the gamil id : "<<endl;
        cin>>gmail_id;
        cout<<"Enter the address : "<<endl;
        cin.ignore();
        cin.getline(addres,100);
        cout<<"Enter the first deposit amount : "<<endl;
        cin>>deposit;
        b[acc_count].create_acc(name,mob_no,gmail_id,addres,deposit);
        acc_count++;
        break;
    case 2:
        cout<<"Enter the account number : "<<endl;
        cin>>acc_no;
        cout<<"Enter the money you want to deposit : "<<endl;
        cin>>deposit;
        find_account = find_acc(b,acc_count,acc_no);
        if(find_account == -1){
            cout<<"This account is not present in our bank. Thank you"<<endl;
        }
        else{
            b[find_account].deposit(acc_no,deposit);
        }
        break;
    case 3:
        cout<<"Enter the account number : "<<endl;
        cin>>acc_no;
        cout<<"Enter the amount to withdraw : "<<endl;
        cin>>withdraw_amt;
        find_account = find_acc(b,acc_count,acc_no);
        if(find_account == -1){
            cout<<"This account is not present in our bank. Thank you"<<endl;
        }
        else{
            b[find_account].withdraw(acc_no,withdraw_amt);
        }
        break;
    case 4:
        cout<<"Enter the account number : "<<endl;
        cin>>acc_no;
        // b.check_balance(acc_no);
        find_account = find_acc(b,acc_count,acc_no);
        if(find_account == -1){
            cout<<"This account is not present in our bank. Thank you"<<endl;
        }
        else{
            b[find_account].check_balance(acc_no);
        }
        break;
    case 5:
        cout<<"Enter the account number to see account Details : "<<endl;
        cin>>acc_no;
        // b.acc_info(acc_no);
         find_account = find_acc(b,acc_count,acc_no);
         if(find_account == -1){
            cout<<"This account is not present in our bank. Thank you"<<endl;
        }
        else{
            b[find_account].acc_info(acc_no);

        }
        break;
    case 6:
        cout<<"Enter the account number to delete the account from our bank : "<<endl;
        cin>>acc_no;
        // b.delete_acc(acc_no);
        find_account = find_acc(b,acc_count,acc_no);
        if(find_account == -1){
            cout<<"This account is not present in our bank. Thank you"<<endl;
        }
        else{
            b[find_account].delete_acc(b,acc_count, find_account,acc_no);
            acc_count--;
        }
    default:
        break;
    }
    cout<<"Do you want use other features(press Y/N) : "<<endl;
    cin>>restart;
    }while(restart == 'Y'|| restart == 'y');
    return 0;
}