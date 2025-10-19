/*使用goto敘述*/
#include<stdio.h>
int main(void)
{
    int i = 0, sum = 0;
    start:
        i++;
        sum+=i;
        printf("%d", i);
        if (i < 10)
        {
            printf("+");
            goto start;
        }
        printf("=%d\n", sum);
        
    return 0;
}