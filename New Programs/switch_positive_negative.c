//program to find where is positive negative and zero

#include<stdio.h>
#include<conio.h>

int main()
{  
     int num;
     printf("Enter the num=");
     scanf("%d",&num);

     switch(num>0)
     {
    
    case 1:
        printf("number is positive");
        break;
    case 0:
    switch(num<0)
    {
        case 1:
            printf("number is negative");
            break;

        case 0:
            printf("number is zero");
            break;
    }
    break;
     }

    return 0;
}