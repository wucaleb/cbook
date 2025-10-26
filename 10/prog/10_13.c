/**/
#include<stdio.h>
int main(void)
{
    int i, a[5] = {32, 16, 35, 65, 52};
    printf("a = %p\n", a);
    printf("&a[%d]=%p\n", i, &a[i]);

    for(i=0;i<5;i++)
        printf("&a[%d]=%p\n", i, &a[i]);
        
    return 0;
}

/*輸出結果：

-------------------------------*/