//A program to call function

#include <stdio.h>
#include <conio.h>
void goodMorning();
void goodAfternoon();
void goodEvening();

int main()
{

    goodMorning();
    goodAfternoon();
    goodEvening();

    return 0;
}

void goodMorning()
{
    printf("Good Morning\n");
}
void goodAfternoon()
{
    printf("Good Afternoon\n");
}
void goodEvening()
{
    printf("Good Evening");
}