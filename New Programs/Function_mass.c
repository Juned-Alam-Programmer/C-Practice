// Aprogram to calculate force of mass using function

#include<stdio.h>
#include<conio.h>

float force(float mass);
int main()
{
    float mass;
    printf("Enter the value of mass:");
    scanf("%f",&mass);
    force(mass);
    printf("The force of mass is %f",force(mass));
    return 0;
}
float force(float mass)
{ 
    float result=mass*9.8;       //gurutwacurcer=9.8
return result;
}