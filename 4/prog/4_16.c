/*搭配4_17.c
利用scanf()讀取數值*/
#include<stdio.h>

int main (void)
{
    int num;

    printf("請輸入一個整數：");
    scanf("%d", &num);
    printf("num=%d\n", num);

    return 0;
}

/*
請輸入一個整數：   123dollars
num=123
---------
未被讀取字串，殘值將存於緩衝區，造成後續程式進行錯誤。
*/