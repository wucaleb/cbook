/*傳遞指標的應用*/
#include<stdio.h>
void add10(int *);
int main(void)
{
    int a = 5;

    printf("呼叫add10()之前,a=%d\n", a);
    add10(&a);
    printf("呼叫add10()之後,a=%d\n", a);

    return 0;
}
void add10(int *p1)
{
    *p1 = *p1 + 10;
}
/*
呼叫add10()之前,a=5
呼叫add10()之後,a=15
指標的傳址呼叫 (Call by Reference)
函數通過接收變數的【記憶體地址】，來直接且永久地修改主程式中變數的值。
*/
