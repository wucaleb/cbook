/*印出變數於記憶體內的位置*/

/*
#include<stdio.h>
int main(void)
{
    int a,b = 5;
    double c = 3.14;

    printf("a = %4d, sizeof(a) = %d,位置為%d\n",a,sizeof(a),&a);
    printf("b = %4d, sizeof(b) = %d,位置為%d\n",b,sizeof(b),&b);
    printf("c = %4.2f, sizeof(c) = %d,位置為%d\n",c,sizeof(c),&c);

    return 0;
}

以上為舊版教材，為方便查看記憶體位置，用十進位顯示位置。
目前實作版本下，輸出結過為垃圾數值，如下：
a = 1506661096, sizeof(a) = 4,位置為-1230508440
b =    5, sizeof(b) = 4,位置為-1230508444
c = 3.14, sizeof(c) = 8,位置為-1230508456
*/
//以下為修改後

#include <stdio.h>

int main(void)
{
    // 【修正 1】初始化 a，避免輸出垃圾值
    int a = 0, b = 5; 
    double c = 3.14;

    // 【修正 2 & 3】: 使用 %zu 輸出 sizeof，使用 %p 輸出位址
    printf("a = %4d, sizeof(a) = %zu,位置為%p\n", a, sizeof(a), (void*)&a);
    printf("b = %4d, sizeof(b) = %zu,位置為%p\n", b, sizeof(b), (void*)&b);
    printf("c = %4.2f, sizeof(c) = %zu,位置為%p\n", c, sizeof(c), (void*)&c);

    // 註記：請移除教材中使用的 system("pause")，它在 Linux/Mac 上無效。
    return 0;
}