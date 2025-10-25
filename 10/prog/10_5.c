/*指標的操作練習*/
#include<stdio.h>
int main(void)
{
    int a = 5, b = 10;
    int *ptr1,*ptr2;
    ptr1 = &a;      //ptr1 指向 a
    ptr2 = &b;      //ptr2 指向 b
    *ptr1 = 7;      //利用ptr1指向&a的值，將a設為7
    *ptr2 = 32;     //利用ptr2指向&b的值，將b設為32
    ptr1 = ptr2;    //將 ptr2 裡儲存的地址，複製給 ptr1，共同指向b
    *ptr1 = 9;      //ptr1 和 ptr2 皆指向 b，故將 b 設為 9
    ptr1 = &a;      //ptr1重新指向&a
    a = 64;         //將a賦予值64
    *ptr2 = *ptr1+5;//將*ptr2的值賦予為*ptr1+5
    ptr2 = &a;      //ptr2指向&a
    
    printf("a = %2d, b = %2d, *ptr1 =%2d, *ptr2 = %2d\n", a, b, *ptr1, *ptr2);
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    return 0;
}

/*指標的間接操作與重新指向 (Repointing)
1. ptr1 和 ptr2 是【獨立的變數】，但可以儲存【相同的地址】。
2. 通過指標修改變數 (解參考 *ptr)，以及直接修改指標 (ptr = &b)。*/