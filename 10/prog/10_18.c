/*函數回傳值為指標【記憶體地址】)*/
#include<stdio.h>
#define SIZE 5
int *maximum(int *);            //maximum 接收一個指標 (int*)，並回傳一個指標 (int*)。
int main(void)
{
    int a[SIZE] = {3,1,7,2,6};
    int i, *ptr;
    printf("array a = ");
    for(i = 0;i < SIZE;i++)     
        printf("%d ", a[i]);
        
    ptr = maximum(a);           //*ptr 用來接收 maximum 函數回傳的地址(ptr指向maximum)
    printf("\nmaximum = %d\n", *ptr);

    printf("ptr (最大值位址) = %p\n",  (void *)ptr);              // 輸出 ptr 儲存的值，即陣列中最大值 (7) 的記憶體位置。
    printf("maximum (函數位址) = %p\n",  (void *)maximum);       // 輸出 maximum 函數程式碼本身在記憶體中的起始位置。


    return 0;
}

int *maximum(int *arr)      //函數定義：接收陣列首地址 (arr)，找出最大值的位置並回傳該位置的地址。
{
    int i, *max;
    max = arr;
    for(i = 1;i < SIZE;i++)
        if(*max < *(arr+i))
            max = arr+i;
    return max;
}
/*輸出結果：
array a = 3 1 7 2 6 
maximum = 7
-------------------------------
利用指標實現：
1.  使用指標算術 *(arr + i) 完美替代了傳統的 arr[i] 陣列遍歷。
2.  函數回傳了一個地址 (指標)，讓主程式能夠直接定位到陣列中的最大值 (7)。
*/