/*雙重指標的範例*/
#include<stdio.h>
int main(void)
{
    int n = 20, *p, **pp;           //*p:一重指標 **pp:二重指標
    p = &n;
    pp = &p;
    printf("n = %d,&n = %p, *p = %d, p = %p, &p = %p\n", n, &n, *p, p, &p);
    printf("**pp = %d,*pp = %p,pp = %p, &pp = %p\n",**pp, *pp, pp, &pp);

    return 0;
}

/*輸出結果：
n = 20,&n = 0x7ff7b2a20e68, *p = 20, p = 0x7ff7b2a20e68, &p = 0x7ff7b2a20e60
**pp = 20,*pp = 0x7ff7b2a20e68,pp = 0x7ff7b2a20e60, &pp = 0x7ff7b2a20e58
-------------------------------*/