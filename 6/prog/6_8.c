/*if-else配對問題（二）*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);

    if(num >= 0)
    {
        if(num <= 10)
        printf("數字介於0到10之間\n");
    }
    else
        printf("數字小於0\n");

    return 0;

}

/*第10行 {} 內的區塊 (第 11, 12 行) 是 if(num >= 0) 的敘述主體。
判定條件符合 (num >= 0) 則執行 {} 內的內層 if。
不符合 (num < 0) 則向下執行 else，輸出「數字小於0」。*/