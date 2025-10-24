/*於函數那更改陣列元素的值*/
#include<stdio.h>
#define SIZE 4
void show(int arr[]);   // 函數原型：接收一個陣列的首地址，用於輸出內容。
void add2(int arr[]);   // 函數原型：接收一個陣列的首地址，用於修改其元素值。

int main(void)
{
    int A[SIZE]={5,3,6,1};
    printf("呼叫add2()前，陣列的內容為： ");
    show(A);
    add2(A);
    printf("呼叫add2()後，陣列的內容為： ");
    show(A);

    return 0;
}
void show(int arr[])
{
    int i ;
    for(i = 0;i < SIZE;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void add2(int arr[])
{
    int i;
    for(i = 0;i < SIZE;i++)
        arr[i]+= 2;
}

/*C語言的陣列傳遞特性：
傳址特性：陣列作為函數參數時，總是退化為指標（首地址）。
間接修改：這使得函數 (add2) 可以透過地址，
間接且永久地修改主程式 (main) 中宣告的原始陣列 (A) 的值。*/