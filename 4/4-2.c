#include<stdio.h>
//#include<conio.h>    //getche()與getch()的函數定義，是 Windows / DOS 特有的標頭檔
int main(void){
    //基礎scanf
    //輸入時以逗號分開
   
    int a,b,c,d;
    printf("輸入數字獲得相加結果");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    printf("%d+%d+%d+%d=%d\n",a,b,c,d,a+b+c+d);
    
    fflush(stdin);

    //十六位數轉換十位數
  
        int num;
        printf("輸入十六進位整數：");
        scanf("%x",&num);
        printf("%x的十進位為%d\n",num,num);

        fflush(stdin);

    //輸入單一字元
    //空白鍵ASCII值為32

    char ch;
    printf("Input a character:");
    scanf("%c",&ch);
    printf("ch=%c, ASCII code is %d\n",ch,ch);

    fflush(stdin);

    //輸入字元陣列
    //可存放10個字元，超過不一定會錯誤，但有風險

    char name[10];

    printf("What's your name? \n");
    scanf("%s" ,name);
    printf("Hi, %s, How are you?\n",name);
    
    fflush(stdin);

    //利用 （空格）確保「不可列印字元」影響結果
    //scanf(" %c", &ch1);
 
    int num1;
    char ch1;
    printf("數字：");
    scanf("%d",&num1);
    printf("字元：");
    scanf(" %c", &ch1);
    printf("num1=%d \nASCII of ch=%d\n",num1, ch1);

    fflush(stdin);

    //fflush(stdin); 清除緩衝區資料
  
   int num2;
   char ch2;
   printf("數字：");
   scanf("%d",&num2);
   fflush(stdin);

   printf("字元：");
   scanf("%c", &ch2);
   printf("num1=%d \nASCII of ch2=%d\n",num2, ch2);

   fflush(stdin);

    //getchar()和putchart()
    //單一字元抓取和顯示
    char ch3;
    printf("請輸入一個字元： ");
    ch3=getchar();
    printf("你輸入的字元為： ");
    putchar(ch3);
    putchar('\n');   

    fflush(stdin);

    //getche()和getch()
    //與getchar差異為不需按下enter
    //mac無此版本故著解掉
/*    
    char ch4;
    printf("請輸入一個字元： ");
    ch4=getche();
    printf("   你輸入的字元為：%c\n",ch4);
    
    printf("請輸入一個字元： ");
    ch4=getch();
    printf("   你輸入的字元為：%c\n,ch4 ");
*/  
        

return 0;
    

    
}