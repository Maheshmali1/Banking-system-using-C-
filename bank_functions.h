#include<string>
#include<iostream>
using namespace std;
class bank
{
private:
    /* data */
public:
    static int Next_account_no;
    long int account_no_;
    string name_,address_,gmail;
    long int depositA;
    string  mobNo;
    bank(/* args */);
    void create_acc(string name,string mob_no,string gmail_id,string address, int deposit);
    void deposit(int acc_no,int deposit_amt);
    void withdraw(int acc_no,int withdraw_amt);
    void acc_info(int acc_no);
    void check_balance(int acc_no);
    void delete_acc(bank *b,int acc_count,int find_account,int acc_no);
    ~bank();
};

int find_acc(bank b[100],int acc_count,long acc_no);
