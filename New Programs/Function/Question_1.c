
// A program to add two number using function

#include<stdio.h>
#include<conio.h>

int add(int a, int b);

int main()
{      
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
        printf("Enter the value of b:\n");
    scanf("%d",&b);
   printf("the addition of two number is =%d",add(a,b));

    return 0;
}
int add(int a, int b){
    int result=a+b;
    return result;



}
