/*數回傳多個結果 — 通過指標實現輸入/輸出分流
本程式展示：函數 (rect) 如何接收輸入的【值】，並將計算出的【結果】寫入到主程式的記憶體位置。*/
#include<stdio.h>
void rect(int , int, int *, int *);         // 函數原型：rect 接收 2 個值 (int, int) 作為輸入，和 2 個指標 (int*, int*) 作為輸出目標。
int main(void)
{
    int a = 5, b = 8;
    int area,peri;
    rect(a, b, &area, &peri);
    printf("area = %d, total length = %d\n", area,peri);

    return 0;
}
void rect(int x,int y,int *p1,int *p2)
{
    *p1 = x*y;
    *p2 = 2*(x+y);
}
/*輸出結果：
area = 40, total length = 26
-------------------------------
本程式成功地利用了指標的傳址特性來實現輸入/輸出分流：
- 輸入數據 (a, b) 保持安全，不受函數影響。
- 輸出目標 (area, peri) 被函數精確地寫入，從而實現了函數回傳多個結果的目的。
*/