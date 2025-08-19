#include <iostream>
using namespace std;
class bankaccount{
    public:
    string accountNo;
    int balance;

    bankaccount(string accNo, double initialBalance){
        accountNo = accNo;
        balance = initialBalance;
    }

    void deposit(double amount){
        if(amount>0){
            balance +=amount;
            cout<<"The bank balance is "<<balance<<endl;
        }
        else{
            cout<<"Insufficient amount!";
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount<balance){
            balance -= amount;
            cout<<"The balance after withdrawal is "<< balance<<endl;
        }
        else{
            cout<<"Insufficient balance!";

        }
    }
    void display() {
        cout << "Account No: " << accountNo << endl;
        cout << "Current Balance: " << balance << endl;
    }

};
int main(){
    bankaccount account("123456789", 1000.0);
    account.display();
    
    account.deposit(500.0);
    account.display();
    
    account.withdraw(200.0);
    account.display();
    
    account.withdraw(1500.0); // Attempt to withdraw more than balance
    account.display();
    
return 0;

}