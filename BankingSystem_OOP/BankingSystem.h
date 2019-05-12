#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LENG=20;

void PrintMenu();
void CreateAccount();
void DepositMoney();
void WithdrawMoney();
void PrintAllAccount();

enum { CREATEACCOUNT=1, DEPOSIT=2, WITHDRAW=3, PRINTALLACCOUNT=4, EXIT=5};

class Account
{
private:
    int accountID;
    char* name;
    int balance;

public:
    Account(int accountID, int money, char* name)
    : accountID(accountID), balance(money)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    ~Account()
    {
        delete []name;
    }

    int GetAccountID()
    {
        return this->accountID;
    }

    void Deposit(int money)
    {
        this->balance += money;
    }

    int Withdraw(int money)
    {
        if(this->balance < money)
        {
            return 0;
        }

        this->balance -= money;
        return money;
    }

    void ShowAccountInfo()
    {
        cout<<"accountID: "<<this->accountID<<endl;
        cout<<"name: "<<this->name<<endl;
        cout<<"balance: "<<this->balance<<endl;
    }
};
