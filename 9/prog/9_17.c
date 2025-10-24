/*氣泡排序法*/
#include<stdio.h>
#define SIZE 5
void show(int a[]), bubble(int a[]);    // 函數原型：show 用於輸出陣列內容；bubble 執行排序演算法。
int main(void)
{   
    int data[SIZE]={26,5,81,7,63};

    printf("排序前...\n");
    show(data);
    bubble(data);
    printf("排序後...\n");
    show(data);
    
    return 0;
}

void show(int a[])
{
    int i;
    for(i = 0;i < SIZE; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void bubble(int a[])
{
    int i, j, temp;         // 【外層迴圈 i】：控制總共需要進行的「趟數」（N-1 趟）。
    for(i = 1;i < SIZE;i++)
        for(j = 0;j<(SIZE-i); j++)  // j < (SIZE - i)：隨著 i 增加，比較範圍縮小，排除了右側已排好的 i 個元素。
        if(a[j] > a[j+1])
        {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
}

/*【程式碼總結與原理說明】
1.演算法：本程式實作了「氣泡排序法 (Bubble Sort)」。
2.  傳址特性：程式透過將陣列 data 傳遞給 bubble 函數，
利用 C 語言的「陣列傳址呼叫」特性，使得 bubble 函數可以直接且永久地修改 main 函數中的原始陣列內容。
3.  巢狀迴圈：
    -   外層迴圈 (i)：控制排序的總趟數 (N-1 趟)。
    -   內層迴圈 (j)：在未排序範圍內，負責相鄰元素的比較與交換，確保最大的數「冒」到右邊
*/