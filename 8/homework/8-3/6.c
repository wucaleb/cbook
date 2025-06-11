#include<stdio.h>
int power(int x, int n);
int main(){
    int base, exponent;
    printf("輸入整數以及他的次方：");
    scanf("%d %d",&base ,&exponent);

    int answer = power(base, exponent);
    printf("%d 的 %d 的次方為：%d\n",base ,exponent, answer);

    return 0;
}

int power(int x, int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
    result *= x;
    }
    return result;
}