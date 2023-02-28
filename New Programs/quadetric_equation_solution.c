// Write a C program to find roots of a quadratic equation using switch case

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    // ax^2 + bx + c = 0
    int a, b, c, r1, r2;

    printf("Enter the value of a,b,c using space: ");
    scanf("%d %d %d", &a, &b, &c);

    r1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    r2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

    printf("Root equation is %d and %d", r1, r2);

    getch();
    return 0;
}

/*
x2-5x-14=0 [Answer: x=-2 & x=7]
X2 = 11x -28 [Answer: x=4 & x = 7]
6x2– x = 5 [Answer: x=-⅚ & x = 1]
12x2 = 25x [Answer: x=0 & x=25/12]
*/