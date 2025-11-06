/**/
#include<stdio.h>
#define SIZE 8
int *maxinum (int *);

int main(void)
{
    int arr[SIZE] = {25, 521, 404, 513, 499, 1109, 925, 444};
    printf("----陣列內共有八個數字----\n");
    for(int i = 0;i < SIZE;i++)
        printf("%d ",arr[i]);
    printf("\n----最大值為----\n");
    int *ptr;
    ptr = maxinum(arr);
    printf("%d",*ptr);
    printf("\n")
;
    return 0;
}

int *maxinum(int *arr)
{
    int i, *max;
    max = arr;
    for(i = 1;i < SIZE;i++)
    if(*max < *(arr+i))
    max = (arr+i);
     return max;
}
/**/