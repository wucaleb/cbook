/*修正型態輸出錯誤，由4_7.c說明*/
#include<stdio.h>

int main (void)
{
    int a = 15;

    printf("a=%d\n", a);
    printf("以浮點數形態印出： %f\n",(float)a);
    printf("以指數形態印出： %e\n", (double)a);

    return 0;
}

/*
強制型別轉換 (Type Casting):
printf()：函式檢查碼可由程式設機師自行定義
如：(float)a,(double)a
*/