#include<stdio.h>
int main(void){
//6-1簡易判斷字母或數字
    /*
    char number;
    scanf("%c",&number);
    if(number>='0' && number<='9')
        printf("此字元是數字\n");
    else
        printf("此字元是字母\n");
        */
//6-2判斷此數大於0，等於0，或小於０
    int num;
    scanf("%d",&num);
    
    if (num>0)
    printf("此數大於0\n");

    else if (num == 0)
    printf("此數等於0\n");

    else
    printf("此數小於0\n");
    
    
    






    return 0;
}