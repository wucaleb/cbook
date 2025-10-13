/*全域變數範1
*/
#include<stdio.h>
void func(void);
int a;        //宣告全域變數a

int main()
{
    a = 100;   //將全域變數a，值設為100
    printf("呼叫func()之前, a = %d\n",a);
    func();  //於函數func()內，將值設為300
    printf("呼叫func()之後, a = %d\n",a);

    return 0;
}
void func(void)
{
    a = 300;             
    printf("於func()內的, a =% d\n", a);
}