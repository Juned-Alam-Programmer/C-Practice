// A program to print marks

#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[4];
    printf("Enter the marks of first student:\n");
    scanf("%d", &marks[0]);
    printf("Enter the marks of second student:\n");
    scanf("%d", &marks[1]);
    printf("Enter the marks of third student:\n");
    scanf("%d", &marks[2]);
    printf("Enter the marks of forth student:\n");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d %d:", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}