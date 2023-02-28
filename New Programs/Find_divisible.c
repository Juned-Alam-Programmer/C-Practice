// the program to find which number divisible 

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter the num=");
    scanf("%d",&num);
    
    if (num % 5 ==0 && num % 11 ==0)
{
    printf("the number is divisible ");
}
    else
{
    printf("num is not divisible");
}
    return 0;
}