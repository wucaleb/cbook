/*錯誤的指標型態*/
#include<stdio.h>
int main(void)
{
    int a1 = 100, *ptri;
    float a2= 3.2f, *ptrf;
    ptri = &a2;
    ptrf = &a1;
    printf("sizeof(a1)=%zu\n", sizeof(a1));
    printf("sizeof(a2)=%zu\n", sizeof(a2));
    printf("a1=%d, *ptri=%d\n", a1, *ptri);
    printf("a2=%.1f, *ptrf=%1f\n", a2, *ptrf);

    return 0;
}

/*
輸出結果：
sizeof(a1)=4
sizeof(a2)=4
a1=100, *ptri=1078774989
a2=3.2, *ptrf=0.000000
-------------------------------
指標型別不匹配導致的錯誤解析 (Pointer Type Mismatch)
本程式將指向 int 的指標指向 float 變數，導致數據被錯誤地解釋，從而讀出亂碼。
*/