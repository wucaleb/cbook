/*「!」運算子的用法*/
#include<stdio.h>

int main(void){
    int a = 0;
    int b = 6;

    printf("a=%d, !a=%d\n",a,!a);
    printf("b=%d, !b=%d\n",b,!b);

    return 0;
}

/*
如果運算元為 0 (邏輯上的「假」/False)，則回傳 1 (邏輯上的「真」/True)。
如果運算元為 非 0 (邏輯上的「真」/True)，則回傳 0 (邏輯上的「假」/False)。*/