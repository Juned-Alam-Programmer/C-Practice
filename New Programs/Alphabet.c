//write a program to check alphabet

#include<stdio.h>
#include<conio.h>

int main()
{
  char ch;
  printf("enter the charecter=");
  scanf("%c",&ch);

  if (ch >= 'a' && ch <= 'z')
{
    printf("the character is alphabet");
}
    else 
{
    printf("the charecter is not alphabet");
}
    return 0;
}