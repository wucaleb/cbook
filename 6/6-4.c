#include<stdio.h>
int main(void){
    
    int a,b;
    char oper;
    printf("請輸入運算式：");
    scanf("%d %c %d",&a,&oper,&b);

    switch (oper)
    {
    case '+':
        printf("%d+%d=%d\n",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d\n",a,b,a-b);
        break;
    case '*':
        printf("%dx%d=%d\n",a,b,a*b);
        break;
    case '/':
        printf("%d/%d=%d\n",a,b,a/b);
        break;
    default:
        printf("無法辨識");
        break;
    }
    return 0;
}