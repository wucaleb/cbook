/*將a與b值互換*/
#include<stdio.h>
void swap(int,int);

int main(void)
{
    int a = 5, b = 20;
    printf("交換前...");
    printf("a = %d,b = %d\n", a, b);
    swap(a,b);
    printf("交換後...");
    printf("a = %d,b = %d\n", a, b);

    return 0;
}
void swap(int x,int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

/*輸出結果：
交換前...a = 5,b = 20
交換後...a = 5,b = 20
-------------------------------
語言對 int 採用傳值呼叫，函數只操作了參數的【副本】。
必須使用【指標】（傳址呼叫），將變數的記憶體地址 (&a, &b) 傳遞給函數，才能修改原始變數。
*/