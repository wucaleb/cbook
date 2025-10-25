/**/
#include<stdio.h>
void swap(int *,int *);
int main(void)
{
    int a = 5,b = 20;
    printf("交換前...");
    printf("a = %d,b = %d\n", a, b);
    swap(&a,&b);
    printf("交換後...");
    printf("a = %d,b = %d\n", a, b);
    
    return 0;
}
void swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

/*輸出結果：
交換前...a = 5,b = 20
交換後...a = 20,b = 5
-------------------------------
透過傳遞變數的【記憶體地址】，讓函數正確且永久地互換主程式中兩個變數的值，
解決了傳值呼叫無法修改原始變數的問題。
*/