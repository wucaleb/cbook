/*輸入字元char*/
#include<stdio.h>
int main (void)
{
    char ch;

    printf("Input a character:");
    scanf("%c", &ch);
    printf("ch=%c, ASCII code is %d\n", ch, ch);

    return 0;
}

/*
%c:僅能接受一字元
例：
Input a character:  e
ch= , ASCII code is 32
如上，若輸入空白，則程式無法讀取後面英文字母e，
*/

