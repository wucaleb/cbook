/*查詢所佔記憶體空間*/
#include<stdio.h>
int main(void){

    double data[4];
    printf("陣列元素所佔位的位元組：%d\n", sizeof(data[0]));
    printf("整個陣列所佔位的位元組：%d\n", sizeof(data));
    printf("陣列元素的個數：%d\n", sizeof(data)/sizeof(double));
    
    return 0;
}