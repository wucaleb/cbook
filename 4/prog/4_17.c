/*搭配4_16.c
利用scanf()讀取數值，觀察緩衝區內殘餘資料*/
#include<stdio.h>

int main (void)
{
    int num;
    char str[10];

    printf("請輸入一個整數：");
    scanf("%d", &num);
    printf("num=%d\n", num);

    printf("請輸入一個字串：");
    scanf("%s", str);
    printf("str=%s\n", str);

    return 0;
}

/*
請輸入一個整數：  445dollars
num=445
請輸入一個字串：str=dollars
殘值留於暫存區導致讀取dollars
*/
