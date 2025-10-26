/*我將陣列第N個元素的值取代為num
-函數通過陣列的首地址 (ptr) 和索引 (n)，精確定位並修改陣列中的單一元素。*/
#include<stdio.h>
void replace(int *,int,int);    //接收 1 個指標(int*:陣列首地址)、1 個整數 (n:索引) 和 1 個整數 (num:新值)。
int main(void)
{
    int a[5] = {13,32,67,14,95};
    int i, num = 24;            //準備替換值    

    replace(a,4,num);
    printf("置換後，陣列的內容為");

    for(i = 0;i < 5;i++)
        printf("%3d",a[i]);
        printf("\n");

    return 0;
}
void replace(int *ptr,int n,int num)
{
    *(ptr+n-1)=num;     //將陣列第n個元素值設為num
}
/*輸出結果：
置換後，陣列的內容為 13 32 67 24 95
-------------------------------
如果利用陣列索引法，也會得出相同結果，
因此可發現陣列索引法是指標算術的一種更方便、更易讀的語法
-------------------------------
陣列索引法書寫方式:
void replace_index(int *arr, int n, int num) // 雖然參數寫 arr，但它仍是個指標
{
    // 【核心邏輯】：這是與 *(ptr + n - 1) 完全等效的寫法
    // 陣列索引 a[n-1] 扮演了「左值 (L-value)」的角色。
    // 它代表了 arr 陣列中索引 n-1 位置的那個記憶體位置。
    arr[n - 1] = num; 
}*/