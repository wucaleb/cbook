/*巢狀for迴圈印出9*9乘法表*/
#include<stdio.h>
int main(void)
{
    int i,j;

    for(i = 1;i <= 9;i++)
    {
        for(j=1;j<=9;j++)
            printf("%d*%d=%2d ",i,j,i*j);
        printf("\n");
    }

    return 0;
}

/**/