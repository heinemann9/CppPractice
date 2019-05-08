#include <iostream>
#include <cstring>

void SetAccount();
void PrintMenu();
void CreateAccount();
void Deposit();
void Withdraw();
void PrintAllAccount();

enum { CREATEACCOUNT=1, DEPOSIT=2, WITHDRAW=3, PRINTALLACCOUNT=4, EXIT=5};

typedef struct {
    int accountID;
    char name[20];
    int balance;
}Account;
