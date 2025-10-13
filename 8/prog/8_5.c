/*求絕對值abs()*/
#include<stdio.h>
int abs(int);

int main(void) 
{
    int i;
    printf("Input an integer:");
    scanf("%d" ,&i);
    printf("abs(%d)=%d\n", i,abs(i));
    return 0;
}


int abs(int n)
{
    if (n<0)
        return -n;
    else 
        return n;
}