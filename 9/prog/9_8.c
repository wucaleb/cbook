/*陣列的搜尋*/
#include<stdio.h>
#define SIZE 6  //定義陣列的大小，隨使用者需求靈活調整
int main(void)
{
    int i, num, flag = 0;   //flag設定為0，
    int A[SIZE] = {33,75,69,41,33,19};

    printf("陣列Ａ元素的值為:");
    for(i = 0; i < SIZE; i++)
        printf("  %d" ,A[i]);
    
    printf("\n輸入欲查詢的數：");
    scanf("%d" ,&num);
    
    for(i = 0; i < SIZE; i++)
    if(A[i] == num)
    {
        printf("找到了！A[%d] = %d\n", i, A[i]);
        flag = 1;   //以找到欲查詢數，修改flag值為1。
    }

    if(flag == 0)   //當未找到時，flag值為0。
        printf("沒找到相同的值！！\n");

        return 0;
}