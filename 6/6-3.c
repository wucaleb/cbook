//條件運算子
//num1>num2 ? (larger=num1) : (larger=num2);
#include<stdio.h>
int main(void){
    int num1 ,num2 ,larger;
    printf("input two number、");
    scanf("%d %d",&num1,&num2);

    num1>num2 ? (larger=num1) : (larger=num2);
    printf("%d數值較大\n", larger);
    return 0;

}