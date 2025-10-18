/*輸入字元char，讀取第一個非空白的字元*/
#include<stdio.h>
int main (void)
{
    char ch;

    printf("Input a character:");
    scanf(" %c", &ch);
    printf("ch=%c, ASCII code is %d\n", ch, ch);

    return 0;
}
/* %c:可忽略緩衝區空白，直到找到第一個非空白字元*/