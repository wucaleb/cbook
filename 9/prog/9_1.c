/*基本一維陣列設定*/
#include<stdio.h>
int main(void)
{
    int i,score[4];

    score[0] = 78;
    score[1] = 55;
    score[2] = 34;
    score[3] = 22;

    for(i = 0;i <=3; i++)
        printf("score[%d] = %d\n",i, score[i]);

        return 0;

}