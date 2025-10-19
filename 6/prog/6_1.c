/*選擇性結構if*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);

    if(num>0)
        printf("您鍵入的整數大於0\n");

    printf("程式結束\n");

    return 0;
}