//write the program to find weather the negative, positive or zero

#include<stdio.h>
#include<conio.h>

int main()
{
 int num;
 printf("enter the num=");
 scanf("%d",&num);

 if(num > 0)
{
    printf("NUMBER IS POSITIVE");
}
    else if(num < 0)
{
    printf("NUMBER IS NEGATIVE");
}  
    else
{
    printf("NUMBER IS ZERO");
}          
    return 0;
}