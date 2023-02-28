// A program to swape the number 

#include<stdio.h>
#include<conio.h>
int swape(int x, int y);
int main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b;\n");
    scanf("%d",&b);
    printf("Before sweping number a=%d b=%d\n",a,b);

    swape(a,b);
    return 0;
}
int swape(int x, int y){
    int t; 
    t=x;
    x=y;
    y=t;
  printf("After swaping number a=%d b=%d",x,y);
}

