// programme to print this is leap year or not

#include <stdio.h>
#include <conio.h>

int main()
{

    int year;
    printf("Enter year to check leap year or not \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("This is leap year");
    }
    else
    {
        printf("This is not leap year");
    }
    return 0;
}