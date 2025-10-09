#include<stdio.h>
const double pi=3.14;
//const 變數必須在宣告時就設置初值（初始化），之後就不能再改變了。
double area(double);

int main(void)
{
    //無法在程式當中設定pi = 3.14159,編譯器錯誤
    printf("pi=%4.2f, area()=%6.2f\n",pi,area(2.0));


    return 0;
}
double area(double r)
{
    return pi*r*r;
}