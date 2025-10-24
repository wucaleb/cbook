//定義巨集f(x)=4*(x)*(x)+6*(x)-5

#include<stdio.h>
#define f(x) 4*(x)*(x)+6*(x)-5

int main(void)
{
    printf("f(1.0) = %.4f\n", f(1.0));
    printf("f(2.2) = %.4f\n", f(2.2));
    printf("f(3.14) = %.4f\n", f(3.14));


    return 0;
}