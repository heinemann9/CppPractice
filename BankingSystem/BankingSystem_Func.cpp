#include "BankingSystem.h"

Account acc[100];
int accCount = 0;

void SetAccount()
{
    for(int i = 0; i < 100; i++)
    {
        acc[i].accountID = -1;
        strcpy(acc[i].name, "\0");
        acc[i].balance = 0;
    }
}

void PrintMenu()
{
    std::cout<<"----Menu----"<<std::endl;
    std::cout<<"1. create account"<<std::endl;
    std::cout<<"2. deposit"<<std::endl;
    std::cout<<"3. withdraw"<<std::endl;
    std::cout<<"4. print all account"<<std::endl;
    std::cout<<"5. exit"<<std::endl;
    std::cout<<"select:";
}

void CreateAccount()
{
    
    std::cout<<"[create account]"<<std::endl;
    std::cout<<"account ID :";
    std::cin>>acc[accCount].accountID;
    std::cout<<"name :";
    std::cin>>acc[accCount].name;
    std::cout<<"deposit money :";
    std::cin>>acc[accCount].balance;
    accCount++;
}

void Deposit()
{
    int id;
    int balance;

    std::cout<<"[Deposit]"<<std::endl;
    std::cout<<"account ID :";
    std::cin>>id;
    std::cout<<"deposit money :";
    std::cin>>balance;

    for(int i = 0; i < 100; i++)
    {
        if (acc[i].accountID == id)
        {
            acc[i].balance += balance;
            std::cout<<"Complete."<<std::endl;
            return;
        }
    }
}

void Withdraw()
{
    int id;
    int balance;

    std::cout<<"[Withdraw]"<<std::endl;
    std::cout<<"account ID :";
    std::cin>>id;
    std::cout<<"Withdraw money :";
    std::cin>>balance;

    for(int i = 0; i < 100; i++)
    {
        if (acc[i].accountID == id)
        {
            if (acc[i].balance - balance < 0)
            {
                std::cout<<"can't withdraw money."<<std::endl;
                return;
            }

            acc[i].balance -= balance;
            std::cout<<"Complete.";
            return;
        }
    }
}

void PrintAllAccount()
{
    std::cout<<"[print all account]"<<std::endl;
    for(int i = 0; i < 100; i++)
    {
        if (acc[i].accountID != -1)
        {
            std::cout<<"accountID: "<<acc[i].accountID<<std::endl;
            std::cout<<"name: "<<acc[i].name<<std::endl;
            std::cout<<"balance: "<<acc[i].balance<<std::endl;
        }
    }
}
