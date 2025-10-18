/*使用scanf()函數，一次輸入兩個函數*/
#include<stdio.h>

int main(void)
{
    int a,b;

    printf("請輸入兩個整數：");
    scanf("%d %d", &a, &b);
    printf("%d+%d=%D\n",a,b,a+b);

    return 0;
}