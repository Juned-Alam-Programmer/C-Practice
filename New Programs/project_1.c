// I am going to write a project with code with harry

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // generates a randome number between 1 to 100
// printf("The number is %d\n", number);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower guess please!\n");
        }
        else if (guess < number)
        {
            printf("Higher guess please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}