#include <stdio.h>
int main (){
    //字元練習
    /printf("\"I LOVE YOU\"\n");
    printf("\"100/4=25\"\n");
    printf("30%%的學生來自加拿大，20%%的來自熊國．\n");   //練習%顯示*/
    
    //特定格式
    int num1=30, num2=1322;
    float num3=13.2493f;
    printf("num1=%6dkm\n", num1); //以%6印出保留6格的結果，靠右
    printf("num1=%06dkm\n", num1);//空白處補0
    printf("num2=%-6dkm\n", num2);//用「-」將結果靠左
    printf("num3=%6.5fkm\n", num3);//寬度 6 無法限制顯示長度超過時的情況，只會確保至少6格
    
    
    int i=444234;
    printf("i=%8dkm\n",i);            //確保八格
    printf("i=%-+8dkm\n",i);          //「-」靠左， 「+」顯示正負
    printf("i=%+08dkm\n",i);           //前方補0
 
    //8進位、16進位
    int eight=153;
    int sixteen=1345;
    printf("153的進位是 %o\n",eight);
    printf("1345的十六進位是 %x\n" ,sixteen);
    

    //整數顯示於其他數字型態
    int math=23;
    printf("a=%d\n", math);
    printf("以浮點數形態顯示: %f\n", math);  //形態錯誤，數值錯亂
    printf("以指數型態顯示: %e\n", math);    //形態錯誤，數值錯亂

    return 0;
}