/*比較陣列內原素質的大小*/
#include<stdio.h>
#define SIZE 5
int *maxinum (int *);
int *mininum (int *);

int main(void)
{
    int A[SIZE] = {74, 48, 95, 64, 34};

    printf("-----陣列內元素為-----\n");
    for(int i = 0;i < SIZE;i++)
        printf("%d ",A[i]);
    printf("\n");

    printf("陣列內最大元素為：");
    int *ptr1;
    ptr1 = maxinum(A);
    printf("%d\n",*ptr1);

    printf("陣列內最小元素為：");
    int *ptr2;
    ptr2 = mininum(A);
    printf("%d\n",*ptr2);
   
    return 0;
}
int *maxinum (int *arr)
{
    int i,*max;
    max = arr;
    for(i = 1;i < SIZE;i++)
        if(*max < *(arr+i))
        max = (arr+i);
        return max;
}
int *mininum (int *arr)
{
    int i,*min;
    min = arr;
    for(i = 1;i < SIZE;i++)
    if(*min > *(arr+i))
    min = (arr+i);
    return min;
}