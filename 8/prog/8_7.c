/*質數的找尋*/
#include<stdio.h>
int is_prime(int num)
{
    int i;
    for(i = 2; i <= num/2 ; i++)
        if(num % i == 0)
        return 0;
    return 1;
}

int main()
{
    int i;
    for(i = 2; i <= 30; i++)
        if(is_prime(i))
        printf("%3d  ", i);
        printf("\n");
        return 0;
}