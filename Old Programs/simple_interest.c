// programme to print simple interest

#include <stdio.h>
#include <conio.h>

int main()
{
    float p, r, y, si;
    printf("Enter the principle amount\n");
    scanf("%f", &p);
    printf("Enter the rate value\n");
    scanf("%f", &r);
    printf("Enter the year\n");
    scanf("%f", &y);

    si = (p * r * y) / 100;

    printf("the interest is:%f", si);

    return 0;
}