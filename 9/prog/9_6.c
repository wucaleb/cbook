#include<stdio.h>
#define MAX 10
int main(void){
    int score[MAX];
    int i = 0, num;
    int sum = 0;

    printf("請輸入成績，要結束時請輸入0：\n");
    do
    {
        printf("請輸入成績：");
        scanf("%d", &score[i]);
    }while(score[i++] > 0);
    num = i - 1;
    for(i = 0; i < num; i++)
        sum += score[i];
        printf("平均成績為%.2f\n", (float)sum/num);

        return 0;

}