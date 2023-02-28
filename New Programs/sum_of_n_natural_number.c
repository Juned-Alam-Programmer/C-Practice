// Write a C program to find the sum of first 10 natural numbers.

#include <stdio.h>
#include <conio.h>

int main()
{
    int j, sum = 0;
  printf("The naturel number is=");

    for (j = 1; j <= 10; j++)
{ 

        printf("%d", j);
                      
        sum = sum + j;
       // printf("%d", j);
    }
    printf("\nThe sum of natural number is :%d\n", sum);
    getch();
    return 0;
}
