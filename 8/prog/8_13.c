/*區域變數範例1
int fac(int n)內函數皆為區域變數，
只存於fac(int n)的{}內*/
#include<stdio.h>
int fac(int);
int main()
{
    int ans;
    ans=fac(5);
    printf("fac(5)=%d\n", ans);
    return 0;
}
int fac(int n)
{
    int i, total = 1;
    for(i = 1; i <= n; i++ )
        total *= i;
    return total;
}

/*在 fac(int n) 函數內，n (參數)、i 和 total 都是區域變數。

作用域限制： 
它們的範圍僅限於 fac 函數的 {} 內，不能在 {} 外被呼叫或使用。

生命週期限制： 
它們儲存在堆疊 (Stack) 上。當 fac 函數被呼叫時才建立，
當函數執行完畢並回傳後，這些變數的記憶體空間就會立即釋放，不再存在。*/