/*傳值呼叫 (Call by Value)
呼叫函數時，原始變數的值被複製到函數的參數中，
因此函數內部對參數的任何修改，
都不會影響到 main 函數中的原始變數。*/

#include<stdio.h>
void add10(int,int);
int main(void)
{
    int a = 3,b = 5;

    printf("呼叫函數add10()之前： ");
    printf("a=%d,b=%d\n",a,b);
    add10(a,b);
    //a = a+ 10;
    printf("呼叫函數add10()之後： ");
    printf("a=%d,b=%d\n",a,b);

    return 0;
}



void add10(int a,int b)
{
    a=a+10;
    b=b+10;
}