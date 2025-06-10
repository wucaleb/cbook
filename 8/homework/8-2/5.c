#include<stdio.h>
int mod(int x, int y);

int main(){
    int x ,y;
    
    printf("輸入(x,y)得x除以y的餘數:\n");
    scanf("%d %d", &x, &y);

    int result = mod(x, y);
    printf("餘數為：%d\n", result);
    return 0;

}

int mod(int x, int y){
    return x % y;
}