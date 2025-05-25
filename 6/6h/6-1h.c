#include<stdio.h>
int main(void){
//6-1簡易判斷字母或數字
    char number;
    printf("判斷字母或數字:\n");
    scanf("%c",&number);
    if(number>='0' && number<='9')
        printf("此字元是數字\n");
    else
        printf("此字元是字母\n");
    
    
        getchar();
    printf("請按 Enter 繼續...\n");
    getchar(); 

    //6-2判斷此數大於0，等於0，或小於０
    int num;
    printf("輸入一數字，判斷此數大於0，等於0，或小於0\n");
    scanf("%d",&num);
    
    if (num>0)
    printf("此數大於0\n");

    else if (num == 0)
    printf("此數等於0\n");

    else
    printf("此數小於0\n");
    

    getchar();
    printf("請按 Enter 繼續...\n");
    getchar(); 

    //輸入一整數判斷為奇數或偶數
    int num2;
    printf("輸入一整數判斷為奇數或偶數\n");
    scanf("%d",&num2);

    if(num2 % 2== 0)
        printf("此數為偶數\n");
    else
        printf("此數為奇數\n");
    

    getchar();
    printf("請按 Enter 繼續...\n");
    getchar();

    //求一整數絕對值
    int num3;
    printf("輸入一整數，得其絕對值\n");
    scanf("%d",&num3);
    
    if( num3 > 0)
        printf("%d\n",num3);
    else if( num3 < 0){
        num3 = -num3;
        printf("%d\n",num3);
    }
    else
        printf("0\n");c

    return 0;
}