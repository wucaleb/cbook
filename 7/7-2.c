
#include <stdio.h>
//1² - 2² + 3² - 4² + 5² ... - 50²=____
int main(void) {
/*    int i, sum = 0;
    for(i = 0; i <= 50; i++){
        if (i % 2 == 1)
        sum += i*i;
        else
        sum -= i*i;
    }
    printf("結果是：%d\n", sum);
//計算1+3+5+7+9...+n = ＿＿
    int n ,j ,sum1 = 0;

    printf("輸入一奇數n:");
    scanf("%d" ,&n);

    for(j = 0; j <= n; j +=2){
        sum1 += j;
    }
        printf("總和為： %d\n", sum1);
//取得所有的因數
    int o, a; 
    printf("輸入一數字取其所有因數n:");
    scanf("%d", &a);
    
    printf("%d 的因數有：", a);
    for(o = 1 ;o <= a; o++){
    if(a % o == 0)
    printf("%d ", o);
}
    printf("\n");
//找出100內所有可被3和8整除的數字
    int c;
    for(c = 1; c <= 100; c++ ){
        if(c % 3 == 0 && c % 8 == 0 )
        printf("%d " ,c);
    }
//1 + 1/2 + 1/3 + ... + 1/N 的總和
    long long d; 
    double sum2 = 0;
    printf("輸入一數字:");
    scanf("%lld" ,&d);

    
    for(long long i = 1; i <= d ; i++){
        sum2 += 1.0/i;
    }    
    printf("總和為：%f  ", sum2);
*/
//1000以內的完美數
    int i, j, sum3;

    for(j = 2; j<=1000; j++){
        sum3 = 0;
        for(i = 1; i < j; i++){
        if(j % i == 0)
            sum3 += i;
    }
    if(sum3 == j)
    printf("%d 是完美數\n", j);
}
    return 0;
}
