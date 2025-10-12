/*定義巨集*/
#include<stdio.h>
#define SQUARE(n) n*n
int main(void)
{
    int a;
    printf("Input an integert:");
    scanf("%d", &a);
    printf("%d * %d = %d\n",a,a,SQUARE(a));

    return 0;
}