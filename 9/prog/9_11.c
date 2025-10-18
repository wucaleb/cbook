#include<stdio.h>
int main(void){
    int A[2][4][3] = {{{21, 32, 34},
                       {33, 66, 55},
                       {31, 45, 67},
                       {35, 35, 89}},
                      {{11, 77, 78},
                       {90, 13, 76},
                       {56, 789, 24},
                       {78, 63, 14}}};
    int i,j,k,max=A[0][0][0];
    
    for(i = 0;i < 2;i++)
        for(j = 0;j < 4;j++)
            for(k = 0;k < 3;k++)
            if(max< A[i][j][k])
                max=A[i][j][k];
                
printf("max=%d\n",max);
return 0;
    
}