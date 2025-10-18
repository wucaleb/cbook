#include<stdio.h>
#define SIZE 4
void show(int arr[]);

int main(void)
{int A[SIZE]={5,3,6,1};
printf("陣列的內容為： ");
show(A);

return 0;
}
void show(int arr[])
{
    int i;
    for(i = 0;i< SIZE;i++)
        printf("%d ",arr[i]);
    printf("\n");
}