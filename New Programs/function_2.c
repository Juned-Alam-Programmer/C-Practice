// A program to call many function by one function

#include <stdio.h>
#include <conio.h>
void goodMorning();
void goodAfternoon();
void goodEvening();
int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf("Good Morning\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon\n");
    void goodEvening();
}
void goodEvening()
{
    printf("Good Evening");
}