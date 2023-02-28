// A program in C to display the cube of the number upto given an integer

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,num;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
{
    printf("The number is %d: and the cube of %d is = %d\n",i,i,(i*i*i));
       
 
}
    return 0;


}
