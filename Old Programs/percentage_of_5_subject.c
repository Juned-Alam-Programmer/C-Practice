// programme to print percentage of 5 subjects

#include <stdio.h>
#include <conio.h>

int main()
{

    int sub1 = 85, sub2 = 78, sub3 = 72, sub4 = 85, sub5 = 85;
    float per;

    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    printf("percentage of 5 subject is %f\n", per);
    printf("this is my percentage");
    return 0;
}