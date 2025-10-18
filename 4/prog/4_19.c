 /*搭配4_18.c
 修正4_18.c讀取到錯誤字元*/
#include<stdio.h>

int main (void)
{
    int num;
    char ch;

    printf("請輸入一個整數： ");
    scanf("%d", &num);                // 讀取數字後，使用者按下的 [Enter 鍵 \n] 會殘留
    printf("請輸入一個字元： ");
    scanf(" %c", &ch);
    printf("num=%d, ASCII of ch=%d\n", num, ch);

    return 0;
}

/*
scanf()內 （空白）的用途：
主動清除輸入緩衝區中所有連續的空白字元，
直到找到第一個非空白的、可見的字元為止。*/