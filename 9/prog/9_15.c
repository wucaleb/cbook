/*印出陣列的位置*/
#include<stdio.h>
#define SIZE 3
int main(void)
{
    int i, A[SIZE] ={20, 8, 13};

    for(i = 0; i< SIZE; i++)
        printf("A[%d]=%2d,位址為%p\n", i, A[i],&A[i]);
    printf("------------------------------\n");
    printf("陣列A的位址=%p\n",A);   //輸出結果中，此位址 (A) 與 A[0] 的位址 (&A[0]) 相同

        return 0;

}

/*陣列名 (A) 所代表的值，就是陣列
【第一個元素 (A[0]) 的記憶體位址 (&A[0])】*/