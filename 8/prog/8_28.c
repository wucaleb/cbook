#include<stdio.h>
#include "/Users/caleb/Desktop/c語言/cbook/8/prog/math.h"

int main (void)
{
    float base, height;
    printf("請輸入三角形的底:");
    scanf("%f", &base);
    printf("請輸入三角形的高：");
    scanf("%f", &height);
    printf("三角形的面積為：%.2f\n", TRIANGLE(base,height));

    return 0;
    

    
}