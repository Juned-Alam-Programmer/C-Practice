//program to find maximum and minimum number 

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf ("enter the vallue of a and b ");
    scanf("%d%d",&a,&b);

    switch(a>b)
    {
        case 0:
            printf("maximum=%d",b);
            break;
            
        case 1:
            printf("maximum=%d",a);
            break;
    }
    return 0;
}