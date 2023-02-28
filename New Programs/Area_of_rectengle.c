// area of rectengle

#include <stdio.h>
#include <conio.h>

int main()
{
    /*int l = 10;
     int b = 5;
     printf("the area of rectengle is %d", l * b);/**/

    float l, b, a;
    printf(" enter the vallue of l=\n");
    scanf("%f", &l);

    printf("enter the vallue of b=\n");
    scanf("%f", &b);

    a = l * b;
    printf("the area of rectengle is %f", a);
    return 0;
}