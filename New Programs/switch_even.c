//program to find even

#include<stdio.h>
#include<conio.h>

int main()
{  
    int num;
    printf("enter the num=");
    scanf("%d",&num);

    switch(num%2==0)
{
    case 0:
        printf("number is odd");
        break;

    case 1:
        printf("number is even");
        break;

}

    return 0;
}