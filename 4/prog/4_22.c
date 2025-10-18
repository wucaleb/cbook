/*使用getche()和putche()函數*/
#include<stdio.h>
#include<conio.h>       // <conio.h> 是非標準函式庫，主要用於舊的 DOS/Windows 編譯器 (如 Turbo C, MSVC)。

int main (void)
{
    char ch;
    printf("請輸入一個字元： ");
    ch=getche();
    printf("您輸入的字元是： ");
    
    printf("請輸入一個字元： ")
    ch=getch();
    printf("   您輸入的字元是： %c\n", ch);



    return 0;
}