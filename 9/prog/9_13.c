/*印出變數的位址*/
#include<stdio.h>
void func(int);
int main(void)
{
    int a=13;
    printf("於main()裡，a=%d,a值得位置=%p\n",a,&a);
    func(a);

    return 0;
}

void func(int a)
{
    printf("於func()裡，a=%d,a的位置為=%p\n",a,&a);
}
/*
C 語言對 int 等基本資料類型採用「傳值呼叫」。
主程式和函數中的變數雖然同名且值一樣，但它們在記憶體中是獨立的，互不干擾。
*/