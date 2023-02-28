//a program in C to display the average and natural numbers


#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n;//sum=0;
    float average,sum=0;
    printf("Enter the number=");
    scanf("%d",&n);

    printf("the number is=%d:\n ",n);
    for(i=1; i<=n; i++)
    {  
        printf("%4d",i);
        sum+=i;
        average=sum/n;
    }
       printf("\nThe sum of number is:%f\n",sum);
        printf("\nThe average of number is:%f\n",average);
    getch();
    return 0;
}

// Not conform we will have to call to sahil atahar

