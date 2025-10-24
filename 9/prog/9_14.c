/*印出陣列的位置*/
#include<stdio.h>
#define SIZE 3
void func(int arr[])
{
    int i;
    printf("\n在func()裡，陣列arr元素為\n");
    for(i=0;i<SIZE;i++)
        printf("arr[%d]=%2d,位置為%p\n",i,arr[i],&arr[i]);
}

int main()
{
    int i,A[SIZE]={20,8,13};

    printf("在main()裡，陣列Ａ元素的位置為\n");
    for(i=0;i<SIZE;i++)
        printf("A[%d]=%2d,位置為%p\n",i,A[i],&A[i]);
    func(A);

    return 0;
}

/*
C 語言對陣列採用「傳址呼叫」（Call by Reference）：
輸出結果中，main() 裡的 &A[i] 的位址，會與 func() 裡的 &arr[i] 的位址【完全相同】。
這表示兩個函數訪問和操作的是記憶體中的【同一塊數據】，而不是複製的副本。*/