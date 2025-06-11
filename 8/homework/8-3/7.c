#include<stdio.h>
int main (){
    int n, count = 0;
    scanf("%d", &n);


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
        printf("第%d個質數是:%d\n", n, i);
        break;
        }   
    }
}   
    return 0;
}
