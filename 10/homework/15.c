/*將陣列內每一元素加10*/
#include<stdio.h>
#define SIZE 5

void add_value(int *arr_ptr, int value,int size);
void show_array(int arr[],int size);
int main(void)
{
    int arr[5] = {31, 17, 33, 22, 16};
    printf("---原始陣列---\n");
    show_array(arr, SIZE);
    printf("---增加10後---\n");
    add_value(arr, 10, SIZE);
    show_array(arr, SIZE);

    return 0;
}
void add_value(int *arr_ptr, int value, int size)
{
    for(int i = 0;i < size;i++)
    {
        *arr_ptr += value;
        arr_ptr++;
    }
}
void show_array(int arr[],int size)
{
    for(int i = 0;i < size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
/**/