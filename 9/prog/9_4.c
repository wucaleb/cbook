/*說明陣列如何輸入與輸出
記得利用符號＆告知編譯器陣列，例如：位置&age[i]*/
#include<stdio.h>
int main(void)
{
    int i, age[3];
    for(i = 0; i < 3; i++)
    {
        printf("請輸入age[%d]的值：",i);
        scanf("%d",&age[i]);
    }
for(i = 0; i <3; i++)
    printf("age[%d] = %d\n", i,age[i]);
    return 0;
}