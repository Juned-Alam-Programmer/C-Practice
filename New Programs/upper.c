//write the program to find the uper and lower alphabet

#include<stdio.h>
#include<conio.h>

int main()
{  
  char ch;
  printf("enter the character=");
  scanf("%c",&ch);

  if (ch > 'a' && ch < 'z')
{
    printf("the character is lower case");
}
    else

{
    printf("the character is upper case");
}
    return 0;
}