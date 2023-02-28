// A program to find squer using function
#include<stdio.h>
#include<conio.h>
int squer(int num);
int main()
{    
    int num;
    printf("Enter any number to find squer:");
    scanf("%d",&num);
    printf("The squer of the number is %d",squer(num));

    return 0;
}
int squer(int num){
    int result=num*num;
    return result;
}
