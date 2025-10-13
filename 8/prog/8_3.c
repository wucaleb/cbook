/*函數擺放位置自由
此範例為放置於主程式前*/
#include<stdio.h>
int add(int num1, int num2)
{
    int a;
    a = num1 + num2;
    return a;
}

int main(void)
{
    int sum, a = 5, b = 3;
    sum = add(a, b);
    printf("%d+%d=%d\n",a, b, sum);
    
    return 0;
}