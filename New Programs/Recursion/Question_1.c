// A program to printf 50 natural number 

#include<stdio.h>
#include<conio.h>
int numprint(int n);
int main()
{
    int n=1;
    printf("The natural number is :\n");
    numprint(n);


    return 0;
}
int numprint(int n){
    if(n<=50){
        printf(" %d\t",n);
        numprint(n+1);
    }
}
