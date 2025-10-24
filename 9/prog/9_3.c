/*查詢所佔記憶體空間*/

#include<stdio.h>
int main(void)
{
    double data[4];

    printf("陣列元素所佔位的位元組：%d\n", sizeof(data[0]));
    printf("整個陣列所佔位的位元組：%d\n", sizeof(data));
    printf("陣列元素的個數：%d\n", sizeof(data)/sizeof(double));
    
    return 0;
}
/*c語言無提供查詢陣列的函數，
這是因為當陣列被傳遞給函數時，它會「退化」成指標，失去長度資訊，
但可藉由陣列所佔的位元組去除以陣列的型態計算出陣列所佔的位元
總長度 = sizeof(data) / sizeof(double)*/