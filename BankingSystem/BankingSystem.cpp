#include "BankingSystem.h"

int main(void)
{
    int choice;
    SetAccount();
    while(1)
    {
        PrintMenu();
        std::cin>>choice;
        std::cout<<std::endl;

        switch(choice)
        {
            case CREATEACCOUNT:
                CreateAccount();
                break;

            case DEPOSIT:
                Deposit();
                break;

            case WITHDRAW:
                Withdraw();
                break;

            case PRINTALLACCOUNT:
                PrintAllAccount();
                break;

            case EXIT:
                return 0;
        }
        std::cout<<std::endl;
    }

    return 0;
}
