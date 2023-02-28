//Find the even or odd

#include<stdio.h>
#include<conio.h>

int main()
{
  int num;

  printf("enter the value=");
  scanf("%d",&num);

  if(num % 2 == 0)
{
    printf("the num is even");
}
    else
{
    printf("the num is odd");
}
        
    return 0;
}