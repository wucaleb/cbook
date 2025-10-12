/*了解巨集特性SQUARE(X) X*X
因*運算子級別較高，因此在巨集中先乘除後加減
本例為：n+1×n+1=2n+1 (X)
*/
#include<stdio.h>
#define SQUARE(X) X*X
int main(void)
{
    int n;
    printf("Input an integert:");
    scanf("%d", &n);
    printf("%d * %d = %d\n",n+1,n+1,SQUARE(n+1));

    return 0;
}