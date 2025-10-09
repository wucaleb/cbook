/*#define在字串並未被替換*/
#include<stdio.h>
#define PI 3.14
double area(double);
int main (void)
{
    printf("PI=%4.2f, area()=%6.2f\n", PI,area(2.0));
    //PI=未被替換
    return 0;
}

double area(double r)
{
    return PI*r*r;
}