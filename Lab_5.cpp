#include <iostream>
using namespace std;

class Account
{
    private:
    int balance = 0;
    public: 
    int deposit_money(int add_balance)
    {
        balance = balance + add_balance;  
        return balance;
    }
    int withdraw_balance(int current_balance)
    {
        if(balance >= current_balance)
        {
           balance = balance-current_balance; 
           return 1;
        }
        else 
        {
            cout << "Insufficient balance!!" << endl;
            return -1;
        }
    }    
    int interest_calc(int rate, int time)
    {
       balance = (balance*rate*time/100) + balance;
        return balance;
    }
    void display()
    {
        cout << "Balance is: " << balance;
    }
};

int main()
{
    Account acc;
    acc.deposit_money(10000);
    int status = acc.withdraw_balance(2000);
    if(status == 1)
    {
        acc.interest_calc(7,3);
        acc.display();
    }
    return 0;
}