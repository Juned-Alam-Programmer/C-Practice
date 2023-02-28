// a program in C to display n terms of natural number and their sum.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the number=");
    scanf("%d",&n);

    printf("the number is%d:\n ",n);
    for(i=1; i<=n; i++)
    {  
        printf("%4d",i);
        sum+=i;
    }
    printf("\nThe sum of number is:%d\n",sum);
    getch();
    return 0;
}



