/*改善8_26無法如期運算的方法
在巨集內加入括號，如：#define SQUARE(X) (X)*(X)
*/
#include<stdio.h>
#define SQUARE(X) (X)*(X)
int main(void)
{
    int n;
    printf("Input an integert:");
    scanf("%d", &n);
    printf("%d * %d = %d\n",n+1,n+1,SQUARE(n+1));

    
    return 0;
}