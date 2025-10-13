/*遞迴函數power(b,n)，計算b的n次方*/
#include<stdio.h>
int power(int,int);
int main(void)
{
    printf("power(2,3) = %d\n", power(2,3));
    return 0;

}
int power(int b,int n)
{
    if(n == 0)
        return 1;
    else 
        return (b*power(b,n-1));
}

/*
1	呼叫 power(2, 3)	2×power(2,2)	等待 power(2, 2) 的結果
2	呼叫 power(2, 2)	2×power(2,1)	等待 power(2, 1) 的結果
3	呼叫 power(2, 1)	2×power(2,0)	等待 power(2, 0) 的結果
4	呼叫 power(2, 0)	return 1	終止條件到達！
5	回傳 (步驟 3)	2×1=2	將 2 回傳給步驟 2
6	回傳 (步驟 2)	2×2=4	將 4 回傳給步驟 1
7	回傳 (步驟 1)	2×4=8	將最終結果 8 回傳給 main 函數
*/