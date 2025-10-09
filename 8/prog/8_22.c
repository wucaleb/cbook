/*#define在字串並未被替換*/
#include<stdio.h>
#define PI 3.14
double area(double);
int main (void)
{
    /* PI = 3.14159;無法編譯則因為PI已被賦予值3.14，
    不能對 3.14 這個數字本身進行賦值操作*/
    printf("PI=%4.2f, area()=%6.2f\n", PI,area(2.0));
    //PI=未被替換
    return 0;
}

double area(double r)
{
    return PI*r*r;
}