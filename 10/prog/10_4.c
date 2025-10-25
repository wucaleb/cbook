/*指標變數的大小*/
#include<stdio.h>
int main(void)
{
    int *ptri;
    char *ptrc;

    printf("sizeof(ptri)= %zu\n",sizeof(ptri));      //記憶體位置
    printf("sizeof(ptrc)= %zu\n",sizeof(ptrc));      //記憶體位置
    printf("sizeof(ptri)= %zu\n",sizeof(*ptri));     //資料型態
    printf("sizeof(ptrc)= %zu\n",sizeof(*ptrc));     //資料型態

    return 0;
}

/*
------------------------------
輸出結果：
sizeof(ptri)= 8
sizeof(ptrc)= 8
sizeof(ptri)= 4
sizeof(ptrc)= 1
------------------------------
sizeof(指標變數)：測量地址大小，值固定 (4 或 8)。
sizeof(*指標變數)：測量內容大小，值由其型別 (int/char/double) 決定。
*/