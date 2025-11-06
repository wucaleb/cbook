/*將陣列內每一元素加10*/
#include<stdio.h>
#define SIZE 5
void add_ten(int *arr_ptr ,int size);
int main(void)
{
    int arr [SIZE] = {34, 76, 33, 42, 76};
    int i;

    printf("---原始陣列---\n");
    for (i = 0;i < SIZE;i++)
        printf("%d ",arr[i]);
        printf("\n");
    
    add_ten(arr, SIZE);

    printf("---增加10後---\n");
    for (i = 0;i < SIZE;i++)
        printf("%d ",arr[i]);
        printf("\n");
    
    return 0;
}
void add_ten(int *arr_ptr ,int size)
{
    for(int i = 0;i < size; i++)
    {
        *arr_ptr += 10;
        arr_ptr++;
    }
}

/**/