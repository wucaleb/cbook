/**/
#include<stdio.h>
int main(void)
    {
        int i;
        for(i=1;i<=10;i++)
        {
            if(i%3==0)
                continue;
            printf("i=%d\n", i);
        }
        printf("跳離迴圈時, i=%d\n", i);

    return 0;
}

/**/