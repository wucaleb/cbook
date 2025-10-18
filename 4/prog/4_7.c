/*整數資料以其他型態輸出，錯誤範例*/
#include<stdio.h>

int main (void)
{
    int a = 15;

    printf("a=%d\n", a);
    printf("以浮點數形態印出： %f\n",a);
    printf("以指數形態印出： %e\n", a);

    return 0;
}
/*
變數 a 是 int (整數)，
%f 和 %e 是為 double 或 float (浮點數) 設計的格式化指定符，
當 printf 遇到這種不匹配時，
它會從記憶體中讀取錯誤大小或錯誤格式的數據，
導致未定義行為 (Undefined Behavior)。
*/