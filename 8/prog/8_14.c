/*區域變數範例2
主程式main與函數void func(void)皆有各自記憶體空間
互不侵犯*/
#include<stdio.h>
void func(void);
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
    int a = 300;
    printf("於func()內的,a=%d\n",a);
}