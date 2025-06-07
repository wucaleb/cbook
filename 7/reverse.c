//反轉數字
#include<stdio.h>
int main(void){
    int a ,reversed;
    while (1)
    {
    
    do{
printf("輸入數字:\n");
scanf("%d",&a);
    }
while (a <= 0);
printf("The reverse is");
reversed = 0;
while(a != 0)
{
    reversed = reversed*10 + a%10;
    a = a/10;
}
printf(" %d", reversed);
printf("\n");
}

return 0;    
}
