 // A program to convert celsius to fahrenheit using function

 #include<stdio.h>
 #include<conio.h>
 float fahr(int temp);
 int main()
 {
    int temp;
    float fahrenheit;
    printf("Enter the tempratur in celsius");
    scanf("%d",&temp);
    fahrenheit=fahr(temp);
    printf("The tempratur in fahrenheit is =%f",fahrenheit);
 }
 float fahr(int temp){
    float fahr;
    fahr=(float)((temp*9/5)+32);
    return fahr;

 }