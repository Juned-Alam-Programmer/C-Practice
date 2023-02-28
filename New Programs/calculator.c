// my first calculator

#include <stdio.h>
#include <conio.h>

int main()
{
    int sellect, num1, num2;
    printf("Please sellect\n");
    printf("[1] ADD (+)\n");
    printf("[2] SUBSTRECT (-)\n");
    printf("[3] MULTIPLY (*)\n");
    printf("[4] DIVIDE (/)\n");

    printf("Enter your sllected option\n");
    scanf("%d", &sellect);

    printf("Enter two number\n");
    scanf("%d%d", &num1, &num2);

    switch (sellect)
    {
    case 1:
        printf("%d+%d=%d", num1, num2, num1 + num2);
        break;

    case 2:
        printf("%d-%d=%d", num1, num2, num1 - num2);
        break;

    case 3:
        printf("%d*%d=%d", num1, num2, num1 * num2);
        break;

    case 4:
    if (num2==0)
    {
        printf("INCRECT");
    }
    else{
        printf("%d/%d=%d", num1, num2, num1 / num2);
    }
        break;

    }
    return 0;
    }