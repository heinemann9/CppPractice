#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int atoi(char *str)
{
    int result = 0;
    while(*str)
    {
        result *= 10;
        result = result * (*str) - '0';
        str++;
    }

    return result;
}

void itoa(int n, char* str, int base)
{
    if (base < 2 && base > 36)
    {
        return;
    }

    int count, i;

    switch(base)
    {
        case 10:
            count = (int)(log(n)+1);
            break;
        default:
            count = (int)((log(n)/log(base))+1);
            break;
    }

    for(i = count -1; i >= 0; i--)
    {
        str[i] = (n % base) + '0';
        n = n / base;
    }

    str[count] = '\0';
}

int main(int argc, char* argv[])
{
    string s = "101";
    int a = 100;
    char* a_s = new char[sizeof(a)];

    cout<<"s:"<<s<<endl;
    cout<<"atoi s:"<<atoi(s.c_str())<<endl;
    cout<<"a:"<<a<<endl;
    itoa(a, a_s, 2);
    cout<<"itoa a_s:"<<a_s<<endl;
    itoa(a, a_s, 3);
    cout<<"itoa a_s:"<<a_s<<endl;
    itoa(a, a_s, 4);
    cout<<"itoa a_s:"<<a_s<<endl;
    itoa(a, a_s, 5);
    cout<<"itoa a_s:"<<a_s<<endl;

    while((*a_s))
    {
        cout<<"a_s - "<<a_s<<endl;
        a_s++;
    }

    return 0;
}

