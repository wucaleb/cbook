/*遞迴函數，計算階層*/
#include<stdio.h>
int fac(int);
int main()
{
    
    printf("fac(4) = %d\n", fac(4));
    return 0;
}

int fac (int n)
{
    if(n>0)
        return (n*fac(n-1));
    else
        return 1;
}