/*二維陣列的輸入與輸出*/
#include<stdio.h>
int main(void)
{
    int i,j,sale[2] [4],sum = 0;    //i：業務員,j：銷售數量

    for(i = 0; i < 2; i++)
        for(j = 0; j < 4;j++)
    {
        printf("業務員 %d 的第 %d 季業績：",i+1,j+1);
        scanf("%d",&sale[i][j]);
    }
    printf("***OUTPUT***");
    for(i = 0;i < 2; i++)
    {
        printf("\n業務員 %4d 的業績分別為:",i+1);
        for(j = 0;j < 4; j++)
        {
            printf("%8d ",sale[i][j]);
            sum+=sale[i][j];
        }
    }
    printf("\n2004年的銷售數量為%d部車\n",sum);

    return 0;
}