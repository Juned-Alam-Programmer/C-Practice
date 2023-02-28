// write the program to find it is trangle or not


#include<stdio.h>
#include<conio.h>

int main()
{  
    int angle_1, angle_2, angle_3, sum;
    printf("enter the number of three angle=");
    scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
     sum=angle_1 + angle_2 + angle_3;
    
    if(sum==180 && angle_1 > 0 && angle_2 > 0 && angle_3 > 0)
{
    printf("triangle is valid");
}
    else
{
    printf("triangle is not valid");
}

    return 0;
}