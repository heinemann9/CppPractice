#include <iostream>
#include <string>
#include "NameSp2.h"

void BestComImp1::SimpleFunc(void)
{
    char* ch = "The Function is defined by BestCom";
    std::string s = ch;
    std::cout<<s<<std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
    std::string s = "The Function is defined by ProgCom";
    char* ch = (char*)s.c_str();
    std::cout<<ch<<std::endl;
}
