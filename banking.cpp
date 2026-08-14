#include<iostream>
using namespace std;
class bank{
    private:
    float balance;

public:
string name;
float account_number,deposit_amount,withdraw_amount;

void details(){
    cout<<"enter your name:";
    cin>>name;

    cout<<"enter your account number:";
    cin>>account_number;

    cout<<"enter your deposit amount:";
    cin>>deposit_amount;

    cout<<"enter your withdraw amount:";    
    cin>>withdraw_amount;
}
    bank(){
        balance=0;
    }
    void deposit(float amount){
        balance+=amount;
        cout<<"Deposited: "<<amount<<endl;
    }
    void withdraw(float amount){
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }else{
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
    }
    void displayBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }
};
int main(){
    bank b1;
    b1.details();
    b1.deposit(b1.deposit_amount);
    b1.displayBalance();
    b1.withdraw(b1.withdraw_amount);
    b1.displayBalance();
    b1.withdraw(b1.withdraw_amount);
    b1.displayBalance();
    b1.deposit(b1.deposit_amount);
    return 0;
}