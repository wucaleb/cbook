/*指標變數的使用*/
#include<stdio.h>
int main(void)
{
    int a = 5,b = 3;
    int *ptr;

    ptr = &a;
    printf("&a = %p, &ptr = %p,ptr = %p, *ptr = %d\n", &a, &ptr, ptr, *ptr);    
    ptr = &b;
    printf("&b = %p, &ptr = %p,ptr = %p, *ptr = %d\n", &b, &ptr, ptr, *ptr);


    return 0;
}

/*輸出結果：
&a = 0x7ff7b86d8e68, &ptr = 0x7ff7b86d8e58,ptr = 0x7ff7b86d8e68, *ptr = 5
&b = 0x7ff7b86d8e64, &ptr = 0x7ff7b86d8e58,ptr = 0x7ff7b86d8e64, *ptr = 3

指標變數的重新指向 (Repointing)
本程式證明：指標 (ptr) 是一個變數，它可以隨時改變，指向不同的目標變數。
---------------------------------------------
 ptr = &a
&a      輸出 a 的位址 (固定不變)
&ptr    輸出 ptr 自己的位址 (固定不變)
ptr     輸出 ptr 儲存的位址（此時是 &a）
*ptr    輸出 ptr 指向的內容（此時是 a 的值 5）
---------------------------------------------
ptr = &b
&ptr    輸出 ptr 自己的位址（不變，它還是同一個變數）
ptr     輸出 ptr 儲存的新位址（此時是 &b）
---------------------------------------------
- &ptr：兩次輸出【相同】，因為 ptr 變數本身在記憶體中的位置沒變。
- ptr：兩次輸出【不同】，因為 ptr 儲存的內容（地址）被改變了。
- *ptr：兩次輸出【不同】，因為 ptr 指向了不同的目標變數（a -> b）。
*/