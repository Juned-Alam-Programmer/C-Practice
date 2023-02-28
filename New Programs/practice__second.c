/*#include <stdio.h>
#include <conio.h>

int main()
{
    int totalDays, year, month, days;
    // total days input
    printf("Enter the days: ");
    scanf("%d", &totalDays);

    // Calculation
    year = totalDays / (30 * 12);
    totalDays %= (30 * 12);

    month = totalDays / 30;
    totalDays %= 30;

    days = totalDays;

    if (year != 0)
    {
        printf("%d Years\t", year);
    }

    if (month != 0)
    {
        printf("%d Month\t", month);
    }

    if (days != 0)
    {
        printf("%d days\t", days);
    }
    getch();
    return 0;
}*/
#include<stdio.h>
#include<conio.h>

int main()
{
   int totledays,year,month,days;
   printf("Enter the totledays");
   scanf("%d",totledays);

   //calculation

   year=totledays/(30*12);
   totledays%=30*12;

   month=totledays/30;
   totledays%=30;

   days=totledays;

   if(year!=0)
{
        printf("%d year\t",year);
}
   if(month!=0)
{
        printf("%d month\t",month);
}
    if(days!=0)
{
        printf("%d days\t",to);
}
    return 0;
}