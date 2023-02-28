// A program to print the address of varreable

#include<stdio.h>
#include<conio.h>

int main()
{
   int a=2;
   int *ptr;
   ptr = &a;
   printf("The address of a is=%d",&a);
   printf("\nThe value of a is=%d",*ptr);

    return 0;
}