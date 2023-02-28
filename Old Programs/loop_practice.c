
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, table, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Table of %d is: \n", num);

    while (i <= 10)
    {
        table = num * i;
        printf("%d X %2d = %d\n", num, i, table);
        i++;
    }

    /*
    for (int i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("%d X %d = %d\n", num, i, table);
    }*/
    return 0;
}