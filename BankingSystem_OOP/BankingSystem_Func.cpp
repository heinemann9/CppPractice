#include "BankingSystem.h"

Account *acc[100];
int accCount = 0;

void PrintMenu()
{
    cout<<"----Menu----"<<endl;
    cout<<"1. create account"<<endl;
    cout<<"2. deposit"<<endl;
    cout<<"3. withdraw"<<endl;
    cout<<"4. print all account"<<endl;
    cout<<"5. exit"<<endl;
    cout<<"select:";
}

void CreateAccount()
{
    int accountID;
    char name[NAME_LENG];
    int balance;

    cout<<"[create account]"<<endl;
    cout<<"account ID :";
    cin>>accountID;
    cout<<"name :";
    cin>>name;
    cout<<"deposit money :";
    cin>>balance;

    acc[accCount++] = new Account(accountID, balance, name);
}

void DepositMoney()
{
    int id;
    int money;

    cout<<"[Deposit]"<<endl;
    cout<<"account ID :";
    cin>>id;
    cout<<"deposit money :";
    cin>>money;

    for(int i = 0; i < accCount; i++)
    {
        if (acc[i]->GetAccountID() == id)
        {
            acc[i]->Deposit(money);
            cout<<"Complete."<<endl;
            return;
        }
    }
}

void WithdrawMoney()
{
    int id;
    int money;

    cout<<"[Withdraw]"<<endl;
    cout<<"account ID :";
    cin>>id;
    cout<<"Withdraw money :";
    cin>>money;

    for(int i = 0; i < accCount; i++)
    {
        if (acc[i]->GetAccountID() == id)
        {
            if (acc[i]->Withdraw(money) == 0)
            {
                cout<<"can't withdraw money."<<endl;
                return;
            }

            cout<<"Complete.";
            return;
        }
    }
}

void PrintAllAccount()
{
    cout<<"[print all account]"<<endl;
    for(int i = 0; i < accCount; i++)
    {
        acc[i]->ShowAccountInfo();
    }
}
