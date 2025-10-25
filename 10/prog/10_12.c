/*函數回傳指標 (Returning a Pointer)
-函數可以回傳一個變數的【記憶體地址】，讓主程式透過該地址來操作或讀取數據。*/
#include<stdio.h>
int *max(int *,int *);
int main(void)
{      
    int a = 12,b = 17, *ptr;
    ptr = max(&a,&b);       //ptr 變數接收並儲存了函數回傳的地址 ，此程式為【&b】。
    printf("max = %d\n",*ptr);

    return 0;
}
int *max(int *p1,int *p2)   //回傳條件下，【值較大的變數的地址】
{
    if(*p1 > *p2)
        return p1;
    else
        return p2;
}
/*輸出結果：
max = 17
-------------------------------
函數 max 的回傳類型是 int * (指標)，而不是 int (數值)。*/