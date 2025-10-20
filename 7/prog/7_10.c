/*巢狀while迴圈求9*9乘法表*/
#include<stdio.h>
int main(void)
{
    int i =1;
    int j;

    while (i<=9)
    {
        j = 1;
        while (j<=9)
        {
            printf("%d*%d=%2d ", i,j,i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

/**/