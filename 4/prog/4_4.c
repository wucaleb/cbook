/*印出特定格式*/
#include<stdio.h>

int main (void)
{
    int num1 = 32, num2 = 1024;
    float num3 = 12.3478f;
    
    printf("num1=%6d 公里\n",num1);
    printf("num2=%-6d 公里\n",num2);
    printf("num3=%6.2f 英里\n",num3);
    return 0;

}

/*
%6d:以6個欄位印出十進位;
%-6d:(-)符號為靠左對齊;
%6.2f:包括小數點共六位，小數點右邊僅顯示2位數寬度
*/