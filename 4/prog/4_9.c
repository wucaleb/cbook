/*使用scanf()函數*/
#include<stdio.h>

int main(void)
{
    int num;

    printf("請輸入一個數字：");
    scanf("%d", &num);
    printf("num = %d\n", num);

    return 0;
}