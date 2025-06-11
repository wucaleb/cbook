#include<stdio.h>
double f(double x){
    return 3 * x * x * x + 2 * x - 1;
}
int main(){
    printf("f(-3.2) = %.6f\n", f(-3.2));
    printf("f(-2.1) = %.6f\n", f(-2.1));
    printf("f(0.00) = %.6f\n", f(0));
    printf("f(2.10) = %.6f\n", f(2.1));
    return 0;
}