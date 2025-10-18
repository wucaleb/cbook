/*遞增運算子「++」*/
#include<stdio.h>

int main(void)
{
    int a = 3, b = 3;

    printf("a=%d", a);
    printf(", a++的回傳值為%d", a++);
    printf(", a=%d\n", a);

    printf("b=%d", b);
    printf(", ++b的傳回值為%d", ++b);
    printf(", b=%d\n",b);

    return 0;
}

/*
a++ (後置)：先用再加 (Use then Increment)。
++b (前置)：先加再用 (Increment then Use)。*/