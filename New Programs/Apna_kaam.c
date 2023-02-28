#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a b c = ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("A is bigg Boss");
    }
    else if (b > a && b > c)
    {
        printf("B is bigg boss");
    }
    else
    {
        printf("c is bigg boss");
    }

    return 0;
}