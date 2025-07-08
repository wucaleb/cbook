#include<stdio.h>
#define SIZE 6
int main(void){
    int i, num, flag = 0;
    int A[SIZE] = {33,39,94,54,31,77};

    printf("陣列Ａ元素的值為:");
    for(i = 0; i < SIZE; i++)
        printf("  %d" ,A[i]);
    
    printf("\n輸入欲查詢的數：");
    scanf("%d" ,&num);
    
    for(i = 0; i < SIZE; i++)
    if(A[i] == num)
    {
        printf("找到了！A[%d] = %d\n", i, A[i]);
        flag = 1;
    }
    if(flag == 0)
        printf("沒找到相同的值！！\n");

        return 0;
}