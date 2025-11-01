/*指標陣列
用一個 char* 陣列，管理多個長度不同的字串。*/
#include<stdio.h>
int main(void)
{   
    int i;
    char *ptr[3]={"Tom", "Lily", "James Lee"};
    for(i = 0;i < 3;i++)
        puts(ptr[i]);

    return 0;
}

/*輸出結果：
Tom
Lily
James Lee
-------------------------------
程式只需要儲存三個地址 (例如 3 * 8 bytes)，而非為每個字串預留長度。
*/