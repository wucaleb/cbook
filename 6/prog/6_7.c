/*if-else配對問題（一）*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);

    if (num >= 0)
        if(num <= 10)
            printf("數字介於0到10之間\n");
        else
            printf("數字大於10\n");

    return 0;
}

/*
本例題中可見else，
會優先找尋最接近的if敘述配對。*/