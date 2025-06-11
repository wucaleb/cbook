#include<stdio.h>
int prime(int n){
    int count = 0;
    for(int i = 2; ; i++){
        int isPrime = 1;
            for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
            isPrime = 0;
            break;
            }
        }
    if(isPrime){
        count++;
            if(count == n){
            return i;
            }
        }   
    }
}
int main (){
    int x;
    printf("輸入你要找的質數是第幾個:\n");
    scanf("%d", &x);
    int result = prime(x);
    printf("第%d 個質數是：%d\n", x, result);
    return 0;
}