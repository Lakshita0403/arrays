#include<stdio.h>

int main()
{
    // 2x3
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 96;
    marks[0][2] = 93;

    marks[1][0] = 91;
    marks[1][1] = 92;
    marks[1][2] = 98;
    printf("%d", marks[0][1]);

    return 0 ;
}