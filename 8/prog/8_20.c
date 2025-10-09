/*設置#define
格式：#define 名稱 代換標記
名稱：通常為大寫，不可有空格*/
#include<stdio.h>
#define BEGIN {
#define END }

int main(void)
    BEGIN
        int i, j;

        for(i = 1; i <= 5; i++)
        BEGIN
            for(j = 1;j <= i; j++)
            printf("*");
            printf("\n");
        END    

        return 0;
    END
        
