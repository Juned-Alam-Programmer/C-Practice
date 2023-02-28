// A program to find sum and avg 

#include<stdio.h>
#include<conio.h>
void sumandavg(int x, int y,int *sum, float *avg){

*sum=x+y;
*avg=(float)*sum/2;
}
int main()
{  
    int a=4,b=6,sum;
    float avg;

    sumandavg(a,b,&sum,&avg);
    printf("the sum of the number is %d\n",sum);
    printf("The avg of the number is %f",avg);


    return 0;
}