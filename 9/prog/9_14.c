#include<stdio.h>
#define SIZE 3
void func(int arr[])
{
    int i;
    printf("\n在func()裡，陣列arr元素為\n");
    for(i=0;i<SIZE;i++)
        printf("arr[%d]=%2d,位置為%p\n",i,arr[i],&arr[i]);
}
int main(){
    int i,A[SIZE]={20,8,13};

    printf("在main()裡，陣列Ａ元素的位置為\n");
    for(i=0;i<SIZE;i++)
        printf("A[%d]=%2d,位置為%p\n",i,A[i],&A[i]);
    func(A);

    return 0;
}
