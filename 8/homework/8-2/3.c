#include<stdio.h>
int cub(int x);
int main(){
    int num;
    
    printf("輸入一數得三次方:\n");
    scanf("%d", &num);
    
    int result = cub(num);
    printf("三次方的數字是：%d\n", result);

    return 0;
}

int cub(int x)
{
    return x * x * x;
}