// programm to print the area of triangle

#include <stdio.h>
#include <conio.h>

int main()
{
    float h, b, area;

    printf("Enter the value of height:");
    scanf("%f", &h);
    printf("enter the value of base:");
    scanf("%f", &b);

    area = (h * b) / 2;

    printf("Area of triangle is:%f", area);
    return 0;
}
