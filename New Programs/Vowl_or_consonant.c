// write a program to find wheather it is vowel or consonant

#include<stdio.h>
#include<conio.h>

int main()
{  
    char ch;
    printf("enter the any character=");
    scanf("%c",&ch);

    if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
{
    printf("the character is vowel");
}
    else
{
    printf("the character is consonant");
}

    return 0;
}