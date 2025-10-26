/*利用指標求證列元素和
與10_16.c進行比較*/
#include<stdio.h>
int main(void)
{
    int a[3] = {5, 7, 9};
    int i,sum = 0;
    for(i=0;i<3;i++)
        sum+=*(a+i);                //同於：sum = sum+a[i]
    printf("sum = %d\n", sum);

    return 0;
}

/*輸出結果：
sum = 21
-------------------------------
a[i] 和 *(a + i) 是【完全等價】
通過指標算術來遍歷陣列，是 C 語言程式設計中常用的底層優化技巧。*/