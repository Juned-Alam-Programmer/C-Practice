// A program to cheak number is even or odd


#include<stdio.h>
#include<conio.h>
int cheakevenodd(int num);

int main()
{
    int num;
    printf("Enter the number to cheak even or odd:");
    scanf("%d",&num);
    cheakevenodd(num);

    return 0;
}
int cheakevenodd(int num){
    if(num%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}
