/*全域變數範2
main 內宣告 a = 100
func()內未宣告，故使用全域變數 a = 50 */
#include<stdio.h>
void func(void);
int a = 50;

int main()
{
    int a=100;
    printf("呼叫func()之前,a=%d\n",a);
    func();
    printf("呼叫func()之後,a=%d\n",a);

    return 0;
}

void func(void)
{
    a = a + 300;
    printf("於func()內的,  a=%d\n",a);
}