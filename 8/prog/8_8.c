/*同時使用多個函數
sum(int), fac(int)*/

#include<stdio.h>
void sum(int), fac(int);
int main()
{
    sum(7);
    fac(5);
    return 0;
}

void sum(int x)
{
    int total = 0; 
    for(int i = 0; i <= x; i++)
    total += i;
    printf("1+2+3+...+%d = %d\n", x, total);
}

void fac(int y)
{
    int total = 1;
    for(int i = 1; i <= y; i++)
    total *= i;
    printf("1x2x3..x%d = %d\n", y, total);
}