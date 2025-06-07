#include<stdio.h>
int main (void){
    //5.體重過重判斷90
    int num;
    printf("輸入你的體重:\n");
    scanf("%d", &num);
    getchar(); // 清掉換行

    if(num>90)
    printf("超重\n");
    
    else
    printf("未超重\n");
    
    
    printf("next(enter)\n");
    getchar();
    
     //6.體重過重判斷180公分90公斤為判斷標準， 若身低於180及體重高於90為超重
     int num1; 
     int num2;
     printf("輸入你的身高體重:\n");
     scanf("%d %d", &num1 ,&num2);
     
     if(num1<180 && num2>90)
     printf("超重\n");
     
     else
     printf("未超重\n");
     
     getchar();
     printf("next(enter)\n");
     getchar();
    
    //7.設定三數是否可構成三角形三邊（雙邊相加大於單邊）
    int side1, side2, side3;
    
    printf("填入三個數字判斷是否可構成三角形三邊:");
    scanf("%d %d %d", &side1, &side2, &side3);    
    
    if(side1+side2>side3 && side2+side3>side1 && side3+side1>side2)
    printf("這是三角形\n");
    else
    printf("這不是三角形\n");

    getchar();
    printf("next(enter)\n");
    getchar();

    //判斷是何種三角形（鈍角、銳角、直角）
    int side4, side5, side6, max;
    printf("輸入三個數值判斷為何種三角形:\n");
    scanf("%d %d %d",&side4, &side5, &side6);
    
    if(side4 + side5 > side6 && side4 + side6 > side5 && side5 + side6 > side4){
        if(side4 >= side5 && side4 >= side6) {max = side4 ;side5 = side4 ;side6 = side5;}
        else if(side5 >= side6 && side5 >= side4){max = side5 ;side6 = side5;}
        else{max = side6;}
        
        int left = side4*side4 + side5*side5;
        int right = max*max;
        
        if(left == right)
            printf("直角三角形\n");
        if(left > right)
            printf("銳角三角形\n");
        if(left < right)
            printf("鈍角三角形\n");
    }
    else
        printf("這不是三角形\n");
    

    //判斷學生成績為A(76~100)B(60~75)C(0~59)
    int score ,aCount = 0 ,bCount = 0 ,cCount = 0;
    
    printf("請輸入10位同學的成績\n");
    
    for(int i = 0; i < 10; i++)
    {
    scanf("%d",&score);
    if(score <= 100 && score>=76)
        aCount++;
    else if(score <= 75 && score >= 60)
        bCount++;
    else if(score >= 0 && score <= 59)
        cCount++;
    else
        printf("成績錯誤\n");
    }

    printf("A 區人數：%d\n", aCount);
    printf("B 區人數：%d\n", bCount);
    printf("C 區人數：%d\n", cCount);

    //輸入任一數，如(3.0,-2.5)，判斷該點在第幾象限或x軸y軸
    float X, Y;
    printf("輸入座標(X,Y)數值(例如：9.31, 2.55)\n");
    scanf("%f , %f", &X, &Y);
    
    if(X > 0 && Y > 0) printf("此數在第一象限\n");
    else if (X < 0 && Y > 0) printf("此數在第二象限\n");
    else if (X < 0 && Y < 0) printf("此數在第三象限\n");
    else if (X > 0 && Y < 0) printf("此數在第四象限\n");
    else if(X == 0 && Y != 0) printf("此數在Y軸\n");
    else if(X != 0 && Y == 0) printf("此數在X軸\n");
    else printf("此數在原點\n");


    return 0;
}