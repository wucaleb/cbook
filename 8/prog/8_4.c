#include<stdio.h>
void display(char, int);
int main (){
    int n;
    char ch;

    printf("請輸入欲列印的字元：");
    scanf("%c", &ch);
    printf("請輸入要印出幾個字元：");
    scanf("%d", &n);
    display(ch,n);
    return 0;
}
void display(char ch, int n){
    int i;
    for(i = 1;i <= n;i++)
        printf("%c",ch);
    printf("\n");
}