// programme to printe fail or pass

#include <stdio.h>
#include <conio.h>

int main()
{
    int percentage;
    printf("enter your percentege:\n");
    scanf("%d", &percentage);

    if (percentage >= 33)
    {
        printf("you are pass");
    }

    else
    {
        printf("you are fail");
    }
    return 0;
}