#include<stdio.h>
void kitty(int k);
int main(){
    int times;
    
    printf("請輸入你想要的次數:\n");
    scanf("%d", &times);
    kitty(times);

    return 0;
}

void kitty(int k){
    for(int i = 0; i < k; i++)
        printf("Hello Kitty\n");
    return;
}