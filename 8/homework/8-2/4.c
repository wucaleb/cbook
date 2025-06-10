#include<stdio.h>
double square(double x);
int main()
{
    int num;
    
    printf("輸入一數字得平方:\n");
    scanf("%d", &num);
    
    int result = square(num);
    printf("平方為：%d\n", result);
    return 0;

}
double square(double x)
{
    return x*x;
}