//write the program to find albha , digit,special character

#include<stdio.h>
#include<conio.h>

int main()
{  
    char ch;
    printf("enter the character=");
    scanf("%c",&ch);

    if (ch > 'a' && ch < 'z')
{
    printf("the character is alphabet");
}
    else if (ch >= '0' && ch <= '9')
{
    printf("the character is digit");
}
    else
{
    printf("the character is special character");
}
    return 0;
}