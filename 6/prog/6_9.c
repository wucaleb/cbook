/*條件運算子的練習*/
#include<stdio.h>
int main(void)
{
    int num1,num2,larger;
    printf("請輸入兩個整數：");
    scanf("%d %d",&num1,&num2);
    
    num1>num2 ? (larger=num1) :(larger=num2);   //也可寫：larger=num1>num2 ? num1 : num2;

    printf("%d數值較大\n",larger);

    return 0;
}

/*
如果符合num1>num2，則larger=num1，不符則larger=num2。
邏輯：判斷為真，執行 larger = num1；判斷為假，執行 larger = num2。
------------
larger=num1>num2 ? num1 : num2;
動作：將「三元運算子的結果」直接賦值給 larger。
邏輯：判斷為真，運算子回傳 num1；判斷為假，運算子回傳 num2。
*/
