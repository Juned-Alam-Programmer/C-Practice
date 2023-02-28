// write the program to find alphabet,digit, speciel character

#include<stdio.h>
#include<conio.h>

int main()
{
   char ch;
   printf("Enter the any character");
   scanf("%c",&ch);

   if (ch > 'a' && ch < 'z' || ch > 'A' && ch < 'Z')
{
    printf("the character is alphabet");
}
   else if (ch > '0' && ch < '9')
{
    printf("the character is digit");
}
    else
{
    printf("the character is speciel character");
}
    return 0;
}