#include<stdio.h>
int main(void){
   
    //測試一元運算子！是否可用負號或小數
    float a=0.444;
    int b=-4;

    printf("a=%f, !a=%d\n",a,!a);
    printf("b=%d, !b=%d\n",b,!b);
    return 0;
}