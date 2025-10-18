/*搭配4_19.c
讀取到錯誤字元*/
#include<stdio.h>

int main (void)
{
    int num;
    char ch;

    printf("請輸入一個整數： ");
    scanf("%d", &num);                // 讀取數字後，使用者按下的 [Enter 鍵 \n] 會殘留
    printf("請輸入一個字元： ");
    scanf("%c", &ch);
    printf("num=%d, ASCII of ch=%d\n", num, ch);

    return 0;
}

/*
所有未讀取的字元（包括換行符）都會留在輸入緩衝區，影響下一個 scanf。
在前面加上空格。 scanf(" %c", &ch)即可解決。
*/