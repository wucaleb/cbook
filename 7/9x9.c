#include<stdio.h>
int main(void)
{
    int i ,j;
    for(i = 1; i <= 9; i++){
        for (j = 1; j <= 9; j++)
        printf("  %dX%d=%02d" ,i, j, i*j);
        printf("\n");
    }
    i = 1;
    while (i <= 9 )
    {
        j = 1;
        while (j <= 9)
        {    
            
            printf("  %dX%d=%2d ",i,j,i*j);
            j++; 
        }
        printf("\n");
        i++;
    }
    
    return 0;

    
}