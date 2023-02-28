//program to find who is fail and pass

#include<stdio.h>
#include<conio.h>

int main()
{
    float p,c,m,e,b,present;

    printf("enter the number of physice,chamestry,math.engles,biology");
    scanf("%f%f%f%f%f",&p,&c,&m,&e,&b);
    
    present = (p+c+m+e+b)/5;

    if(present>=90)
    {
        printf("you have got 'A' grade");
    
    }

    else if (present>=80)
    {
        printf("you have got 'B' grade");
    }
    else if(present>=60)
    {
        printf("you have got 'C' grade");
    }
    else if(present>=40)
    {
        printf("you have 'D' grade");
    }
    else if(present<40)
    {
        printf("you have got 'F' grade");
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}