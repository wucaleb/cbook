#include<stdio.h>
int main(void)
{
    int i ,j;
    for(i = 1; i <= 9; i++){
        for (j = 1; j <= 9; j++)
        printf("  %dX%d=%2d" ,i, j, i*j);
        printf("\n");
    }
    return 0;
}