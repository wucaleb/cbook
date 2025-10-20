/*do while迴圈應用*/
#include<stdio.h>
int main(void)
{
    int n,i = 1,sum = 0;
    do
    {
        printf("請輸入n值(n>0)：");
        scanf("%d", &n);
    }
    while (n <= 0);

    do
        sum += i++;
    while(i <= n);
    
    printf("1+2+3+...+%d=%d\n",n,sum);

    return 0;
}
/**/