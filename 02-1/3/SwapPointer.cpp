#include <iostream>

// Pointer of Reference
void SwapPointer(int *(&ptr1), int *(&ptr2))
{
    int *pt = ptr1;
    ptr1 = ptr2;
    ptr2 = pt;
}

int main(void)
{
    int num1 = 5;
    int *ptr1 = &num1;

    int num2 = 10;
    int *ptr2 = &num2;

    SwapPointer(ptr1, ptr2);

    std::cout<<*ptr1<<","<<*ptr2<<std::endl;

    return 0;
}