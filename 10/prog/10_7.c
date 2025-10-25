/*傳遞指標到函數裡*/
#include<stdio.h>
void address(int *);
int main(void)
{
    int a = 12;
    int *ptr = &a;
    
    address(&a);    //直接將 A 的【地址值】傳遞給函數
    address(ptr);   //傳遞 ptr 儲存的內容（該內容也是 A 的地址）

    return 0;
}
void address(int *p1)
{
    printf("於位置%p內，儲存的變數內容為%d\n",p1,*p1);
}

/*輸出結果：
於位置0x7ff7be121e68內，儲存的變數內容為12
於位置0x7ff7be121e68內，儲存的變數內容為12
-------------------------------
指標傳遞地址的兩種方式
-無論是直接傳遞變數地址 (&a) 還是傳遞儲存該地址的指標變數 (ptr)，
對函數而言，它們收到的都是同一塊記憶體位置。

*/