#include<stdio.h>
int fac(int);
int main(){
    int ans;
    ans=fac(5);
    printf("fac(5)=%d\n", ans);
    return 0;
}
int fac(int n){
    int i, total = 1;
    for(i = 1; i <= n; i++ )
        total *= i;
    return total;
}