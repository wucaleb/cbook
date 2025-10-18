/*輸入十六進位，印出十進位*/
#include<stdio.h>

int main(void)
{
    int num;

    printf("請輸入十六進位整數：");
    scanf("%x", &num);
    printf("%x的十進位數為：%d\n", num, num);

    return 0;
}