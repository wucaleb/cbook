/*全域變數範3
設定兀供全域使用*/
#include<stdio.h>
double pi = 3.14;
void peri(double);
void area(double);
int main(void)
{
  double r=1.0;
  printf("pi=%.2f\n",pi);
  printf("radius=%.2f\n",r);
    peri(r);
    area(r);
  return 0;
}

void peri(double r)
{
    printf("圓周長=%.2f\n", 2 * pi * r);
}

void area(double r)
{
    printf("圓面積=%.2f\n", pi * r *r);
}