/*利用define取代簡易函數*/
#include<stdio.h>
#define SQUARE n*n

int main(void)
{
    int n;
    printf("Input an integer:");
    scanf("%d", &n);
    printf("%d * %d = %d\n",n,n,SQUARE);

        return 0;
}
