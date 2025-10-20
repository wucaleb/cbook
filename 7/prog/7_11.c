/*利用巢狀迴圈印出三角形*/
#include<stdio.h>
int main(void)
{
    int i,j,n=6;

    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

/**/