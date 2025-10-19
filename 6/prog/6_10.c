/*switch敘述的使用範例*/
#include<stdio.h>
int main(void)
{
    int a,b;
    char oper;
    printf("請輸入運算式（例如：3+2)： ");
    scanf("%d %c %d",&a,&oper,&b);

    switch(oper)
    {
        case'+':
            printf("%d+%d=%d\n",a,b,a+b);
        break;

        case'-':
            printf("%d-%d=%d\n",a,b,a-b);
        break;

        case'*':
            printf("%d*%d=%d\n",a,b,a*b);
        break;

        case'/':
            printf("%d/%d=%.3f\n", a,b,(float)a/b);
        break;

        default:
            printf("無法辨識的運算式！！\n");
    }
    return 0;
}