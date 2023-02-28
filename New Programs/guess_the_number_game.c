
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("The randam number is=%d\n", number);
    do
    {
        printf("Guess the randam number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower guess please!\n");
        }
        else if (guess < number)
        {
            printf("Higher guess please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts", nguesses);
        }
        nguesses++;

    } while (guess != number);
    return 0;
    getch();
}