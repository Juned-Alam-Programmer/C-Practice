// A program to adding the number of given range

#include<stdio.h>
#include<conio.h>
int sumofrange(int n);
int main()
{
    int n,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=sumofrange(n);
    printf("The sum of number from 1 to %d is %d",n,sum);
    return 0;
}
int sumofrange(int n){
  int range;
  if(n==1){
    return 1;
  } 
  else if(n==0){
    return 1;
  }
  else{
    range=n+sumofrange(n-1);
  }
  return range;
}
