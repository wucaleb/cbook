/*定義巨集SQUARE(X) X*X*/
#include<stdio.h>
#define SQUARE(X) X*X
int main(void)
{
    int n;
    printf("Input an integert:");
    scanf("%d", &n);
    printf("%d * %d = %d\n",n,n,SQUARE(n));

    return 0;
}