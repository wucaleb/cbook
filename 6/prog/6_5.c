/*巢狀if敘述練習*/
#include<stdio.h>
int main(void)
{
    int score;
    printf("請輸入成績：");
    scanf("%d", &score);

    if(score < 60)
    {
        if(score >= 50)
            printf("請參加補考\n");
        else
            printf("必須重修\n");
    }
    else
        printf("本科及格\n");

        return 0;
}