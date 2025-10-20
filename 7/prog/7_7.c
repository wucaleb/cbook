/*利用do while求迴圈n!*/
#include<stdio.h>
int main(void)
{
    int n, i=1,fact=1;
    do
    {
        printf("請輸入n值(n>0): ");
        scanf("%d", &n);
    }
    while(n <= 0);

    do 
        fact*=i++;
    while(i <= n);
    printf("%d!=%d\n",n,fact);

    return 0;
}

/**/