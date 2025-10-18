#include<stdio.h>
void func(int);
int main(void)
{
    int a=13;
    printf("於main()裡，a=%d,a值得位置=%p\n",a,&a);
    func(a);

    return 0;
}

void func(int a)
{
    printf("於func()裡，a=%d,a的位置為=%p\n",a,&a);
}