/*指標變數的宣告*/
#include<stdio.h>
int main(void)
{
    int *ptr, num = 20;

    ptr = &num;
    printf("num = %d, &num = %p\n",num ,&num);
    printf("*ptr = %d,  ptr = %p, &ptr = %p\n", *ptr, ptr, &ptr);

    return 0;
}

/**/