#include <stdio.h>
#include <conio.h>

int main()
{
    // int i;
    int marks[4];
    int *ptr;
    ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of marks %dth student :\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("the marks of %d student is %d\n", i + 1, marks[i]);
    }

    return 0;
}