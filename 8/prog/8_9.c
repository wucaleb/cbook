#include<stdio.h>
double Leibniz(int);
double power(double, int);
int main(){
    int i;
    for(i = 1; i<=1000;i++){
        printf("Leibniz(%d)=%12.10f\n",i,Leibniz(i));}
        return 0;
}
double  Leibniz(int n){
    int k;
    double sum = 0;
    for(k = 1;k <= n;k++)
        sum = sum +power(-1.0,k-1)/(2*k-1);
        return 4*sum;
}
double power(double base, int n){
    int i;
    double pow = 1.0;             //乘法的起始值為1(不影響結果)
    for(i = 1;i <= n;i++)
        pow = pow*base;
    return pow;
}