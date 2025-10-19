/*if-else-if敘述的應用*/
#include<stdio.h>
int main(void)
{
    int score;
    printf("Your score:");
    scanf("%d", &score);

    if (score >= 80)
        printf("%d is A\n", score);
    else if (score >= 70)
        printf("%d is B\n", score);
        else if(score >= 60)
            printf("%d is C\n", score);
            else
            printf("Faild!!\n");

    return 0;
}

/*
if (score >= 80)   
    else if (score >= 70) 
        else if(score >= 60)   
            else
在沒有大括號 {} 的情況下，
一個 else 永遠會與**最近的、未被配對的 if** 進行配對。
本案例中無用大括號，因此else會找最近的上一個if。
*/