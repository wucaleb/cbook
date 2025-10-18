/*使用getchar()和putchar()函數*/
#include<stdio.h>

int main (void)
{
    char ch;
    printf("請輸入一個字元： ");
    ch=getchar();
    printf("您輸入的字元是： ");
    putchar(ch);
    putchar('\n');

    return 0;
}