/*使用printf()函數的修飾子*/
#include<stdio.h>

int main(void)
{
    int i=1234;
    printf("i=%+08d\n", i);

    return 0;
}


/*
+:將數值正負號顯示
-:符號為靠左對齊
0:前方補0
 :空白數，數值為正，留一格空白，為負顯示負號
*/