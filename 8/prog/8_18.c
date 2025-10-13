/*靜態變數-固定記憶體空間
與程式同壽，以static宣告
範例：tatic float num    宣布靜態浮點變數num
*/
#include<stdio.h>
void func(void);
int main(void)
{
    func();
    func();
    func();
    
    return 0;
}

void func(void)
{
    static int a =100;
    printf("In func(),a=%d\n",a);
    a+=200;
}