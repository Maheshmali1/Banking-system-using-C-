#include<iostream>
#include<string>
#include"bank_functions.h"
using namespace std;
int bank::Next_account_no=0;
bank ::bank(){
    
};
bank::~bank(){
};
void bank::create_acc(string name,string mob_no,string gmail_id,string address,int deposit){
    Next_account_no++;
    account_no_ = Next_account_no;
    name_ = name;
    mobNo = mob_no;
    gmail = gmail_id;
    address_ = address;
    depositA = deposit;
    cout<<"***Your account is succesfully created in our bank.***"<<endl;
    cout<< "*****your account number is : "<<account_no_<<" *****"<<endl;
    cout<<"Hope good investment from you in our bank"<<endl;  
}

void bank::deposit(int acc_no,int deposit_amt){
    depositA += deposit_amt;
}

void bank::withdraw(int acc_no,int withdraw_amt){
    if(depositA>0 && (depositA-withdraw_amt)>= 0){
        depositA -= withdraw_amt;
    }
    else{
        cout<<"Sorry !! You don't have sufficient banlance to withdraw. "<<endl;
        cout<<"Please check once account balance before withdraw money"<<endl;
    }
}
void bank::check_balance(int acc_no){
    cout<<"** Your account balance is : "<<depositA<<" **"<<endl;
}
void bank::acc_info(int acc_no){
    cout<<"****** Your account information is : ******"<<endl;
    cout<<"Account no :"<<account_no_<<endl;
    cout<<"Name : "<<name_<<endl;
    cout<<"mobile no : "<<mobNo<<endl;
    cout<<"Gmail. ID : "<<gmail<<endl;
    cout<<"Address : "<<address_<<endl;
    cout<<"Balance amount : "<<depositA<<endl;
}

void bank::delete_acc(bank *b,int acc_count,int find_account,int acc_no){
    cout<<"** Account succesfully deleted **"<<endl;
    for(int i=find_account;i<acc_count;i++){
        b[i] = b[i+1];
    }
    


}
 
int find_acc(bank b[100],int acc_count,long acc_no){
    for(int i=0;i<acc_count;i++){
        if(b[i].account_no_ == acc_no){
            return i;
        }
    }
    return -1;
}