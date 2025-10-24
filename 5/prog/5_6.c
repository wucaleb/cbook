/*邏輯運算子的應用*/
#include<stdio.h>

int main(void)
{
    int score;
    printf("請輸入成績：");
    scanf("%d",&score);

    if((score<0) ||(score>100))
        printf("成績輸入錯誤！！\n");
    
    if((score<60) && (score>49))
        printf("需要補考！！\n");

    return 0;
}
/*
&&(AND) 例：a>0 && b>0  兩者皆為true，才做運算
||(OR)  例：a>0 || b>0  只要有一true，便做運算
*/