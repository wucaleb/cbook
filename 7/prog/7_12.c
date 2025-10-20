/**/
#include<stdio.h>
int main(void)
{
    int a,r;

    while(1)
    {
        do 
        {
            printf("In put an integer:");
            scanf("%d",&a);
        }
        while(a <= 0);

        printf("The reverse is ");
        while (a != 0)
        {
            r =a%10;
            a/=10;
            printf("%d", r);
        }
        printf("\n\n");
    }

    return 0;
}

/**/