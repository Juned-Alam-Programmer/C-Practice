// programm to convart celsius to fahrenheit

#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the value of celcius\n:");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("The value of fahrenheit is:%f", fahrenheit);

    return 0;
}