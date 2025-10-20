/*空回圈的誤用*/
#include<stdio.h>
int main(void)
{
    int i;
    for(i = 1; i <= 10000; i++);    //空迴圈
    printf("i=%d\n", i);

    return 0;
}

/**/