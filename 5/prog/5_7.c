/*簡潔運算式*/
#include<stdio.h>

int main (void)
{
    int a = 3,b = 5;
    printf("計算前： a=%d, b=%d\n",a,b);
    a+=b;   //a+=b,即a=a+b
    printf("計算後： a=%d, b=%d\n",a,b);

    return 0;

}


