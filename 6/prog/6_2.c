/*使用兩個if敘述來判斷數字*/
#include<stdio.h>
int main(void)
{
    int num;

    printf("請輸入一個整數：");
    scanf("%d", &num);

    if(num>0)
        printf("您輸入的整數大於0\n");

    if(num<=0)
        printf("您鍵入的整數小於或等於0\n");

    printf("程式結束\n");

    return 0;
}