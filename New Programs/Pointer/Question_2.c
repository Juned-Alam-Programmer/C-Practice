// A program to print the variable as well as print variable in function

#include <stdio.h>
#include <conio.h>
void printadd(int a)
{
    printf("The address of a is%u", &a);
}
int main()
{
    int a = 2;
    printf("\nThe value of a is %d\n", a);
    printadd(a);
    printf("\nthe address of a is %u", &a);
}