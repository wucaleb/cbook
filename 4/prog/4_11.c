/*使用scanf()函數，使用逗號區隔輸入格式
,為分隔號，必須確保於程式執行時，使用這格式符合要求*/
#include<stdio.h>

int main(void)
{
    int a,b;

    printf("請輸入兩個整數，請用逗號隔開數值：");
    scanf("%d ,%d", &a, &b);
    printf("%d+%d=%D\n",a,b,a+b);

    return 0;
}