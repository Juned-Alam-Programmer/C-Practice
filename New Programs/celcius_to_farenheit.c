// convert celcius to farenheit

#include <stdio.h>
#include <conio.h>

int main()
{
    float celcius, farenheit;
    printf("enter the vallue of celcius");
    scanf("%f", &celcius);

    farenheit = celcius * 9 / 5 + 32;
    printf("the vallue of farenhiet is %f", farenheit);

    return 0;
}
