#include "BankingSystem.h"

int main(void)
{
    int choice;
    while(1)
    {
        PrintMenu();
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case CREATEACCOUNT:
                CreateAccount();
                break;

            case DEPOSIT:
                DepositMoney();
                break;

            case WITHDRAW:
                WithdrawMoney();
                break;

            case PRINTALLACCOUNT:
                PrintAllAccount();
                break;

            case EXIT:
                return 0;
        }
        cout<<endl;
    }

    return 0;
}
