//program to print reverse number

/*#include<stdio.h>
#include<conio.h>

int main()
{
   int num,remember,reverse;
   printf("Enter the num=");
   scanf("%d",&num);

   for(;num!=0; num=num/10)
{
    remember=num%10;
    reverse=reverse*10+remember;
}
    printf("the reverse number is %d",reverse);
    getch();
    return 0;
} */


#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    for(i=10;i>=1;--i)
    printf(" %d\n",i);
    return 0;
}