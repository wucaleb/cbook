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

/*輸出結果：
num = 20, &num = 0x7ff7b48ece5c
*ptr = 20,  ptr = 0x7ff7b48ece5c, &ptr = 0x7ff7b48ece60*/