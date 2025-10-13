/*計算x的n次方*/
#include<stdio.h>
double power(double, int);
int main()
{
    double x;
    int n;

    printf("輸入底數與次方:");
    scanf("%lf %d", &x, &n);
    printf("%lf的%d次方=%lf\n", x, n, power(x, n));
    return 0;
}

double power(double base, int n)
{
    int i;
    double pow = 1.0;             //將乘法的起始值為1(不影響結果)
    for(i = 1;i <= n;i++)
        pow = pow*base;
    return pow;
}
/*區域變數必須初始化?
儲存位置： 
區域變數（在函數內部宣告的變數，如 main() 裡的變數）
通常儲存在堆疊 (Stack) 上。

預設值： 
C 語言的設計規定，堆疊上的記憶體在被分配給新變數時，不會被清零。

結果： 
如果您只宣告 int x; 而沒有給它賦值，
變數 x 裡面儲存的將是該記憶體位置之前使用後留下的任何隨機資料，
我們稱之為垃圾值 (Garbage Value)。
*/